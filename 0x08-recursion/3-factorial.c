#include "main.h"

/**
 * factorial - a funtion that uses recurson to return the factorial of a
 *	given number.
 * @n: The number to calculate the factorial of.
 *
 * Return: The factorial of the given number,
 *	or negative 1 if the number is negative.
 */

int factorial(int n)
{
	if (n == 0)
		return (1); /* Return 1 for 0 input */
	else if (n < 0)
		return (-1); /* Return -1 for negative input */
	else
		return (n * factorial(n - 1));
}
