#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_error - Prints error messages based on error code.
 * @error_code: The error code.
 * @filename: The filename associated with the error (if applicable).
 */
void print_error(int error_code, const char *filename)
{
	switch (error_code)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			break;
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
			break;
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
			break;
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", filename);
			break;
		default:
			break;
	}
	exit(error_code);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t n_read, n_written;
	char buffer[1024];

	if (argc != 3)
		print_error(97, NULL);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		print_error(98, argv[1]);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		print_error(99, argv[2]);

	while ((n_read = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		n_written = write(fd_to, buffer, n_read);
		if (n_written == -1 || n_written != n_read)
			print_error(99, argv[2]);
	}

	if (n_read == -1)
		print_error(98, argv[1]);

	if (close(fd_from) == -1)
		print_error(100, argv[1]);

	if (close(fd_to) == -1)
		print_error(100, argv[2]);

	return (0);
}
