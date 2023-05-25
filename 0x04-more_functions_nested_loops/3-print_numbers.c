#include "main.h"

/**
 * print_numbers - a function that prints the numbers, from 0 to 9.
 *
 * Return: void
 */

void print_numbers(void)
{
	int f;

	for (f = 0 ; f <= 9 ; f++)
		_putchar(f + 48);

	_putchar('\n');
}
