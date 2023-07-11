#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>  /* for variadic arguments */
#include "main.h"

/**
 * error_exit - Prints an error message and exits the program with the
 *               specified exit code.
 * @exit_code: The exit code.
 * @format: The format string for the error message.
 * @...: Additional arguments for formatting the error message.
 */
void error_exit(int exit_code, const char *format, ...)
{
	va_list args;

	va_start(args, format);
	vfprintf(stderr, format, args);
	va_end(args);

	fprintf(stderr, "\n");
	exit(exit_code);
}

/**
 * main - Copies the content of a file to another file.
 * @argc: The number of command-line arguments.
 * @argv: The array of command-line arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to, read_bytes, write_bytes;
	char buffer[1024];

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to");

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file %s", argv[1]);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd_to == -1)
		error_exit(99, "Error: Can't write to %s", argv[2]);

	while ((read_bytes = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		write_bytes = write(fd_to, buffer, read_bytes);
		if (write_bytes == -1 || write_bytes != read_bytes)
			error_exit(99, "Error: Can't write to %s", argv[2]);
	}

	if (read_bytes == -1)
		error_exit(98, "Error: Can't read from file %s", argv[1]);

	if (close(fd_from) == -1)
		error_exit(100, "Error: Can't close fd %d", fd_from);

	if (close(fd_to) == -1)
		error_exit(100, "Error: Can't close fd %d", fd_to);

	return (0);
}

