/*
 * File: 100-elf_header.c
 * Auth: Terrence M.K
 */
#include "main.h"

/**
 * main - Displays the information contained in the ELF header of a file.
 * @argc: The number of command-line arguments.
 * @argv: The array of command-line arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int f;
	ssize_t s;
	char buffer[5];
	char elf[1];

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: cp file\n");
		exit(97);
	}

	f = open(argv[1], O_RDWR);

	if (f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open from file %s\n", argv[1]);
		exit(98);
	}

	s = read(f, buffer, 4);

	if (s == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	s = lseek(f, 1, SEEK_SET);

	s = read(f, elf, 1);

	if (elf[0] != 'E')
		exit(98);

	close(f);
	return (0);
}
