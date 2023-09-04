#include "main.h"

/**
 * append_text_to_file - appends text to a file ending
 * @filename: filename.
 * @text_content: content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int n_letters;
	int byte_wr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (n_letters = 0; text_content[n_letters]; n_letters++)
			;

		byte_wr = write(fd, text_content, n_letters);

		if (byte_wr == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
