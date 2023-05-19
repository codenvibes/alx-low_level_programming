#include <stdio.h>

/**
 * main - Entry point.
 * Description: a program that prints all single digit numbers of base
 *	10 starting from 0.
 *
 * Return: 0(success)
 */

int main(void)
{
	int digit = 0;

	while (digit < 10)
	{
		printf("%d", digit);
		digit++;
	}

	printf("\n");
	return (0);
}
