#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the posix standard output
 * @filename: name of the file to be read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters);
{
	int fd, m;
	long int n;
	char *buf;

	buf = malloc(sizeof(char) * (letters + 1));

	if (buf == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	n = read(fd, buf, letters);

	close(fd);

	if (n == -1)
		return (0);

	buf[letters] = '\0';

	m = write(STDOUT_FILENO, buf, n)
	free(buf);

	if (m == -1)
		return (0);

	return (n);
}
