#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: Number of bytes, 0 otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *bfr;

	if (filename == NULL)
		return (0);

	bfr = malloc(sizeof(char) * letters);
	if (bfr == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, bfr, letters);
	w = write(STDOUT_FILENO, bfr, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(bfr);
		return (0);
	}

	free(bfr);
	close(o);

	return (w);
}
