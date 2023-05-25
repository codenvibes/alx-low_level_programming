#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14.
 *
 * Return: void
 */

void more_numbers(void)
{
	int count, num;

	for (count = 0 ; count < 10 ; count++)
	{
		for (num = 0 ; num < 15 ; num++)
		{
			if (num > 9)
				_putchar(49);
			_putchar((num % 10) + 48);
		}
		_putchar('\n');
	}
}
