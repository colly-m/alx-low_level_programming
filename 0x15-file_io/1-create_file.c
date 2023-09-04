#include "main.h"

/**
 * create_file - function to create a file
 * @filename: being the pointer to name of file to create
 * @text_content: being pointer to the string to write into file
 * Return: 1 on success, -1 if fails
 * if filename is NULL return -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wt = 1, count = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[count])
		count++;
		wt = write(fd, text_content, count);
	}

	if (wt == -1)
		return (-1);

	close(fd);

	return (1);
}
