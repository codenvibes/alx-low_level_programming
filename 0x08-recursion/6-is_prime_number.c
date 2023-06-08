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

	i = 2;

	/**
	 * Recursive base case: if i reaches the square root of n,
	 * n is prime
	 */
	if (i * i > n)
		return (1);

	/* Recursive case: check divisibility of n by i */
	if (n % i == 0)
		/* n is divisible by i, so it's not prime */
		return (0);

	/* Recursive call: increment i and check divisibility again */
	return (is_prime_number(n));
}
