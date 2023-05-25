#include "main.h"

/**
 * print_diagonal -  a function that draws a diagonal line.
 * @n: the number of times the character \ should be printed.
 * Return: void
 */

void print_diagonal(int n)
{
	int len, gap;

	if (n > 0)
	{
		for (len = 0 ; len < n ; len++)
		{
			for (gap = 0 ; gap < len ; gap++)
				_putchar(' ');
			_putchar('\\');

			if (len == n - 1)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
