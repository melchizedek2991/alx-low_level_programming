#include "main.h"

/**
 * read_textfile - program reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fid;
	ssize_t nrf, nrw;
	char *bfi;

	if (!filename)
		return (0);

	fid = open(filename, O_RDONLY);

	if (fid == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!bfi)
		return (0);

	nrd = read(fid, bfi, letters);
	nwr = write(STDOUT_FILENO, bfi, nrf);

	close(fid);

	free(bfi);

	return (nrw);
}
