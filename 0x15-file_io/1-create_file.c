#include "main.h"

/**
 * create_file -  a function that creates a file.
 * @filename:points to the name of the file
 * @text_content: points to a string
 *
 * Return: 1 if it fails, Otherwise 1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int file, wrt, ln = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (ln = 0; text_content[ln];)
			ln++;
	}

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wrt = write(file, text_content, ln);

	if (file == -1 || wrt == -1)
		return (-1);

	close(file);

	return (1);
}
