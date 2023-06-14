#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: 0(success).
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int mul = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
