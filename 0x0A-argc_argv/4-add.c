#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that adds positive numbers.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: 0 (success);
 */

int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		/* If one of the number contains symbols that are not digits, print Error */
		int count = 1; /* start from 1 to skip the program name */
		int sum = 0;

		while (count < argc)
		{
			/* If one of the number contains symbols that are not digits,*/
			/* print Error */
			int i;

			for (i = 0 ; argv[count][i] != '\0' ; i++)
			{
				if (argv[count][i] < '0' || argv[count][i] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[count]);
			count++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("%d\n", 0);
	}

	return (0);
}
