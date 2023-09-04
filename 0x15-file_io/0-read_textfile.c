#include "main.h"

/**
 * read_textfile - function to read a text file and prints its standard
 * output in POSIX
 * @filename: the text file to read
 * @letters: number of letters it reads and print
 * Return: actual number of letters it could print and read or 0 if file
 * cannot be read or opened or if file is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t rd, wt;
	int fd;
	char *buf;

	if (filename == NULL || letters < 1)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	rd = read(fd, buf, letters);
	if (rd < 1)
		return (0);

	wt = write(STDOUT_FILENO, buf, rd);
	if (wt < 1)
		return (0);
	free(buf);
	close(fd);

	return (wt);
}
