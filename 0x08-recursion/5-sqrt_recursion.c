#include "main.h"

int sqrt_helper(int n, int i);

/**
 * _sqrt_recursion - a function that returns the natural square root
 *	of a number.
 * @n: The number to calculate the square root of.
 *
 * Return: The square root of the number,
 *	or -1 if it doesn't have a natural square root.
 */

int _sqrt_recursion(int n)
{
	/* If the number is negative, it doesn't have a natural square root */
	if (n < 0)
		return (-1);
	/* Base cases: the square root of 0 or 1 is the number itself */
	else if (n == 0 || n == 1)
		return (n);
	/* Call a helper function to perform the recursive calculation */
	return (sqrt_helper(n, 1));
}

/**
 * sqrt_helper - Recursive helper function to calculate the square root.
 * @n: The number to calculate the square root of.
 * @i: the current number to check as a potential square root.
 *
 * Return: The square root of the number,
 *	or -1 if it doesn't have a natural square root.
 */

int sqrt_helper(int n, int i)
{
	/* Found the natural square root of n */
	if (i * i == n)
		return (i);
	/**
	 * Overshot the square root of n,
	 * n does not have a natural square root
	 */
	if (i * i > n)
		return (-1);

	/* Recursively check the next number as a potential square root */
	return (sqrt_helper(n, i + 1));
}
