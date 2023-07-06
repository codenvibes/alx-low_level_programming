/*
 * File: 5-flip_bits.c
 * Auth: Terrence M.K
 */

#include "main.h"

/**
 * flip_bits - Returns the number of bits needed to flip to convert
 *	       one number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int count = 0;

	while (diff > 0)
	{
		count += diff & 1;
		diff = diff >> 1;
	}

	return (count);
}

