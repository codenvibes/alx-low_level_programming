#include "main.h"

/**
 * print_most_numbers - a function that prints the numbers, from 0 to 9.
 *	excluding 2 & 4.
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int f;

	for (f = 0 ; f <= 9 ; f++)
	{
		if (f != 2 && f != 4)
			_putchar(f + 48);
	}

	_putchar('\n');
}
