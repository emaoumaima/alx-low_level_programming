#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

void display_error(const char *error_message);
void display_elf_header(const Elf64_Ehdr *elf_header);
void print_osabi(const Elf64_Ehdr *elf_header);
void print_type(const Elf64_Ehdr *elf_header);
void print_entry(const Elf64_Ehdr *elf_header);

/**
 * display_error - displays an error message to stderr and exits with status code 98
 * @message: the error message to display
 */

void display_error(const char *error_message)
{
	fprintf(stderr, "Error: %s\n", error_message);
	exit(98);
}

/**
 * display_elf_header - displays the ELF header information
 * @elf_header: pointer to the ELF header
 */

void display_elf_header(const Elf64_Ehdr *elf_header)
{
	int i;

	printf("ELF Header:\n");

	printf("  Magic:   ");
	for (i = 0; i < (EI_NIDENT - 1); i++)
		printf("%02x ", elf_header->e_ident[i]);
	printf("%02x", elf_header->e_ident[i]);
	printf("\n");

	printf("  Class:                             %s\n",
			elf_header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");

	printf("  Data:                              %s\n",
			elf_header->e_ident[EI_DATA] == ELFDATA2LSB
			? "2's complement, little endian"
			: "2's complement, big endian");

	printf("  Version:                           %d (current)\n",
			elf_header->e_ident[EI_VERSION]);

	print_osabi(elf_header);

	printf("  ABI Version:                       %d\n",
			elf_header->e_ident[EI_ABIVERSION]);

	print_type(elf_header);

	print_entry(elf_header);
}

/**
 * print_osabi - Prints the osabi indent of an ELF header.
 * @elf_header: pointer to the ELF header
 */

void print_osabi(const Elf64_Ehdr *elf_header)
{
	printf("  OS/ABI:                            ");
 	switch (elf_header->e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM_AEABI:
			printf("ARM EABI\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x>\n", elf_header->e_ident[EI_OSABI]);
			break;
	}
}

/**
 * print_type - Prints the type of an ELF header.
 * @elf_header: pointer to the ELF header
 */

void print_type(const Elf64_Ehdr *elf_header)
{
	unsigned int e_type = elf_header->e_type;

	if (elf_header->e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("  Type:                              ");
	switch (e_type)
	{
		case ET_NONE:
			printf("NONE (No file type)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x>\n", e_type);
			break;
	}
}

/**
 * print_entry - Prints the entry point of an ELF header.
 * @elf_header: pointer to the ELF header
 */

void print_entry(const Elf64_Ehdr *elf_header)
{
	const unsigned char *ei = elf_header->e_ident;
	Elf64_Addr ee = elf_header->e_entry;

	printf("  Entry point address:               ");

	if (ei[EI_DATA] == ELFDATA2MSB)
	{
		ee = ((ee << 8) & 0xFF00FF00) |
                          ((ee >> 8) & 0xFF00FF);
		ee = (ee << 16) | (ee >> 16);
	}

	if (ei[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)ee);

	else
		printf("%#lx\n", ee);
}

/**
 * main - entry point for the program
 * @argc: the number of command-line arguments
 * @argv: an array of command-line argument strings
 *
 * Return: 0 on success, 98 on error
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	const char *file_path;
	int fd;
	Elf64_Ehdr elf_header;

	if (argc != 2)
		display_error("Usage: elf_header elf_filename");

	file_path = argv[1];

	fd = open(file_path, O_RDONLY);
	if (fd < 0)
		display_error("Failed to open file");

	if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		close(fd);
		display_error("Failed to read ELF header");
	}

	/* Verify the file is an ELF file */
	if (elf_header.e_ident[EI_MAG0] != ELFMAG0 ||
		elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
		elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
		elf_header.e_ident[EI_MAG3] != ELFMAG3)
	{
		display_error("The file is not an ELF file");
	}

	display_elf_header(&elf_header);

	close(fd);
	return (0);
}
