#include <stdio.h>

/**
 * main - Prints the first 50 fibonacci numbers
 *
 * Return:  Always 0.
 */

int main(void)
{
	int i;
	unsigned long f1 = 0, f2 = 1, sum;

	for (i = 0; i < 50; i++)
	{
		sum = f1 + f2;
		f1 = f2;
		f2 = sum;
		printf("%lu", f2);

		if (i != 49)
			printf(", ");
	}

	printf("\n");

	return (0);
}
