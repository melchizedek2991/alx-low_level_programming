#include "main.h"

/**
 * read_textfile - file reading and prints from file
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t byte_rd, byte_wr;
	char *buff;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * (letters));
	if (!buff)
		return (0);

	byte_rd = read(fd, buff, letters);
	byte_wr = write(STDOUT_FILENO, buff, byte_rd);

	close(fd);

	free(buff);

	return (byte_wr);
}
