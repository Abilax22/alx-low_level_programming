#include "main.h"

/**
 * read_textfile - this code reads a text file and prints the letters
 * @filename: filename
 * @letters: numbers of letters printed
 * Return: numbers of letters printed. It fails, returns 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fa;
	ssize_t nd, nw;
	char *buf;

	if (!filename)
		return (0);

	fa = open(filename, O_RDONLY);

	if (fa == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nd = read(fa, buf, letters);
	nw = write(STDOUT_FILENO, buf, nd);

	close(fa);

	free(buf);

	return (nw);
}
