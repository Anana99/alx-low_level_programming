#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints its content to standard output.
 * @filename: Name of the file to read.
 * @letters: Number of letters to read and print.
 *
 * Return: The actual number of letters read and printed, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n_read = 0;
	ssize_t n_written = 0;
	char *buffer;
	FILE *file;

	if (filename == NULL)
		return (0);

	file = fopen(filename, "r");
	if (file == NULL)
		return (0);

	buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	n_read = fread(buffer, sizeof(char), letters, file);
	if (n_read > 0)
	{
		buffer[n_read] = '\0';
		n_written = fwrite(buffer, sizeof(char), n_read, stdout);
	}

	free(buffer);
	fclose(file);

	if (n_read != n_written)
		return (0);

	return (n_written);
}
