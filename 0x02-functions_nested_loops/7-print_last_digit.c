#include "main.h"

/**
 * print_last_digit - entry point
 * @n: whole number
 * Description: a function that prints a number's last digit
 * Return: integer
 */

int print_last_digit(int n)
{
	int last = n % 10;

	if (n < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
