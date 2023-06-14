#include <stdio.h>

/**
 * main - a program that prints all arguments it receives.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: 0(success).
 */

int main(int argc, char *argv[])
{
	int count; /* loop counter/index */

	for (count = 0 ; count < argc ; count++)
	{
		printf("%s\n", argv[count]);
	}

	return (0);
}
