#include "main.h"

/**
 * _pow_recursion - a function that calculates the value of x
 *	raised to the power of y recursively.
 * @x: The base number.
 * @y: The exponent.
 *
 * Return: The result of x raised to the power of y,
 *	-1 if y < 0.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1); /* If true, return -1 */
	else if (y == 0)
		/**
		 * If true, return 1 since any number raised to the
		 * power of 0 is 1
		 */
		return (1);
	/* Recursively multiply x by the result of x^(y-1) */
	return (x * _pow_recursion(x, y - 1));
}
