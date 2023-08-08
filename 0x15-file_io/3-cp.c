#include "main.h"

#define BUFF_SIZE 1024

/**
 * error_98 - function to check for error 98
 * @ff: pointer to value to check
 * @buf: the pointer to buffer
 * @argv: argument vector
 * Return: void
 */
void error_98(int ff, char *buf, char *argv)
{
	if (ff < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv);
		free(buf);
		exit(98);
	}
}

/**
 * error_99 - function to check for error 99
 * @ff: pointer to the value to check
 * @buf: pointer to the buffer
 * @argv: argument vector
 * Return: void
 */
void error_99(int ff, char *buf, char *argv)
{
	if (ff < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv);
		free(buf);
		exit(99);
	}
}

/**
 * error_100 - function to check for error 100
 * @ff: pointer to the value to check
 * @buf: pointer to the buffer
 * Return: void
 */
void error_100(int ff, char *buf)
{
	if (ff < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", ff);
		free(buf);
		exit(100);
	}
}

/**
 * main - Entry point
 * @argc: pointer to number of arguments
 * @argv: pointer to an array of arguments
 * Return: 0 success
 */
int main(int argc, char **argv)
{
	int ff, ft, rd, wt;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buf = malloc(sizeof(char) * BUFF_SIZE);
	if (buf == NULL)
		return (0);

	ft = open(argv[1], O_RDONLY);
	error_98(ft, buf, argv[1]);

	ff = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	error_99(ff, buf, argv[2]);

	do {
		rd = read(ft, buf, 1024);
		if (rd == 0)
			break;
		error_98(rd, buf, argv[1]);
		wt = write(ff, buf, rd);
		error_99(wt, buf, argv[2]);
	} while (wt <= BUFF_SIZE);
	rd = close(ff);
	error_100(rd, buf);
	rd = close(ft);
	error_100(rd, buf);
	free(buf);
	return (0);
}
