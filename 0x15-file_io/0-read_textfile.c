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
	int fd, size;
	char *buf = malloc(sizeof(char) * letters);
	size = 0;

	if (filename == NULL)
		return (0);
	
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	
	read(fd, buf, letters);

	buf[letters - 1] = '\0';

	while (buf[i] != '\0')
	{
		size++;
		i++;
	}

	close(fd);

	printf("%s\n", buf);

	return size;
}
	



