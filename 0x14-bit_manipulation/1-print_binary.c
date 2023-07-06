/*
 * File: 1-print_binary.c
 * Auth: Terrence M.K
 */

#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << ((sizeof(unsigned long int) * 8) - 1);
	int flag = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (mask > 0)
	{
		if ((n & mask) != 0)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag == 1)
		{
			_putchar('0');
		}

		mask = mask >> 1;
	}
}

