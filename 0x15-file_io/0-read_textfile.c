#include "main.h"
/**
 * read_textfile - reads a text file and prints it to standard output
 *
 * @filename: name of the file to read
 * @letters: letters to read and print
 *
 * Return: number of letters printed(SUCCESS), or 0 (FAIL)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int n;
	int x, y;
	char *buf;

	if (!filename)
		return (0);
	n = open(filename, O_RDONLY);
	if (n < 0)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	x = read(n, buf, letters);
	if (x < 0)
	{
		free(buf);
		return (0);
	}
	buf[x] = '\0';
	close(n);
	y = write(STDOUT_FILENO, buf, x);
	if (y < 0)
	{
		free(buf);
		return (0);
	}
	free(buf);
	return (y);
}
