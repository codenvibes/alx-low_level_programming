#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci numbers below 4000000
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long f1 = 0, f2 = 1, f_sum;
	float sum;

	while (1)
	{
		f_sum = f1 + f2;
		if (f_sum > 4000000)
			break;

		if ((f_sum % 2) == 0)
			sum += f_sum;

		f1 = f2;
		f2 = f_sum;
	}

	printf("%.0f\n", sum);

	return (0);
}
