#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *ptr_creation(char *fln);
void file_closed(int fl);

/**
 * ptr_creation - Allocates 1024 bytes for a buffer.
 * @fln: an array where buff size is kept
 *
 * Return: buffsiz
 */
char *ptr_creation(char *fln)
{
	char *ptr;

	ptr = malloc(sizeof(char) * 1024);

	if (ptr == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", fln);
		exit(99);
	}

	return (ptr);
}

/**
 * file_closed - This fn closes file descrptrs
 * @fl: file descptr to be closed.
 */
void file_closed(int fl)
{
	int x;

	x = close(fl);

	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fl);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another file
 * @argc: counts argument passed on cmd line
 * @argv: an array that points to the args
 *
 * Return: returns 0 (success)
 *
 *
 */
int main(int argc, char *argv[])
{
	int i, j, rd, wrt;
	char *ptr;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	ptr = ptr_creation(argv[2]);
	i = open(argv[1], O_RDONLY);
	rd = read(i, ptr, 1024);
	j = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (i == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(ptr);
			exit(98);
		}

		wrt = write(j, ptr, rd);
		if (j == -1 || wrt == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(ptr);
			exit(99);
		}

		rd = read(i, ptr, 1024);
		j = open(argv[2], O_WRONLY | O_APPEND);

	} while (rd > 0);

	free(ptr);
	file_closed(i);
	file_closed(j);

	return (0);
}
