#include "main.h"
#include <unistd.h>

/**
 * append_text_to_file - Appends text at the end of a file
 *
 * @filename: Name of the file
 * @text_content: content to append into the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w_len = 0, t_len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < -1)
		return (-1);

	if (text_content)
	{
		while (*(text_content + t_len) != '\0')
			t_len++;

		w_len = write(fd, text_content, t_len);
		if (w_len == -1 || w_len != t_len)
			return (-1);
	}

	close(fd);

	return (1);
}
