#include "main.h"

/**
 * append_text_to_file - function to append text at end of file
 * @filename: pointer to the file to append to
 * @text_content: the pointer to the string to be appended
 * Return: 1 on success, -1 if fails or NULL
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fn, wt, slen;

	if (!filename)
		return (-1);

	fn = open(filename, O_APPEND | O_WRONLY);
	if (fn == -1)
		return (-1);

	if (!text_content)
	{
		close(fn);
		return (1);
	}
	for (slen = 0; text_content[slen] != '\0'; slen++)
		;

	wt = write(fn, text_content, slen);
	if (wt < 1)
		return (-1);

	close(fn);
	return (1);
}
