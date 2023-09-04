#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int n_letters;
	int byte_wr;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (n_letters = 0; text_content[n_letters]; n_letters++)
		;

	byte_wr = write(fd, text_content, n_letters);

	if (byte_wr == -1)
		return (-1);

	close(fd);

	return (1);
}
