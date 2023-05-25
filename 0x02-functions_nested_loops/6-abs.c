#include "main.h"

/**
 * _abs - entry point
 * @n: number to make absolute.
 * Description: function that computes an  interger's absolute value.
 * Return: number n
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);

	else
	{
		n = n * -1;
		return (n);
	}
}
