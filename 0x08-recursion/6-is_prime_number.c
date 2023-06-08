#include "main.h"

/**
 * is_prime_number - Check if a number is prime.
 * @n: The number to check.
 *
 * Return: 1 if prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	int i;

	/* Numbers less than or equal to 1 are not prime */
	if (n <= 1)
		return (0);

	/* Check for factors up to the square root of n */
	for (i = 2; i * i <= n; i++)
	{
		/*  If n is divisible by i, it's not prime */
		if (n % i == 0)
			return (0);

	/* If no factors found, n is prime */
	}
	return (1);
}
