#include "main.h"

/**
 * read_textfile - reads text file and prints letters
 * @filename: filename.
 * @letters: numbers of letters to print read and print.
 *
 * Return: when number to be printed fails, return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file-d;
	ssize_t bytr, bytwr;
	char *buff;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buff)
		return (0);

	nrd = read(file-d, buff, letters);
	nwr = write(STDOUT_FILENO, buff, bytr);

	close(file-d);

	free(buff);

	return (bytwr);
}
