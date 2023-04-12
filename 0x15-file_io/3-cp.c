#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * main - Copies the content of a file to another file
  * @lo: number of argument passed
  * @ve: array of pointers to arguments
  * Return: Always Return On Success 0
  */

int main(int lo, char *ve[])
{
	int draw_from, draw_to, eli, jah;
	mode_t perm = S_IRUSR | S_IWUSR | S_IWGRP | S_IRGRP | S_IROTH;
	char buffer[BUFSIZ];

	if (lo != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	draw_from = open(ve[1], O_RDONLY);
	if (draw_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", ve[1]), exit(98);
	draw_to = open(ve[2], O_CREAT | O_WRONLY | O_TRUNC, perm);
	if (draw_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", ve[2]), exit(99);
	eli = 1;
	while (eli)
	{
		eli = read(draw_from, buffer, BUFSIZ);
		if (eli == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", ve[1]), exit(98);
		if (eli > 0)
		{
			jah = write(draw_to, buffer, eli);
			if (jah != eli || jah == -1)
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", ve[2]), exit(99);
		}
	}
	if (close(draw_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", draw_from), exit(100);
	if (close(draw_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", draw_to), exit(100);
	return (0);
}
