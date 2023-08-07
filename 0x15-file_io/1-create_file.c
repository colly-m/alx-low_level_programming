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
	int fn, wt, count;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (count = 0; text_content[count] != '\0'; count++)
			;
	}
	fn = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wt = write(fn, text_content, count);

	if (fn == -1 || wt == -1)
		return (-1);

	close(fn);

	return (1);
}
