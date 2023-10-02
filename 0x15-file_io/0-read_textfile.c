#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - reads a text file
 * and prints it to the POSIX standard output.
 * @filename: defines a name of a file
 * @letters: defines nber of letters to be read
 *
 * Return: wrt.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bfio;
	ssize_t wrt;
	ssize_t txt;
	ssize_t file;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	bfio = malloc(sizeof(char) * letters);
	txt = read(file, bfio, letters);
	wrt = write(STDOUT_FILENO, bfio, txt);
	free(bfio);
	close(file);
	return (wrt);
}
