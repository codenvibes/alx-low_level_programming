#include <stdio.h>

/**
 * print_array - a function that prints n elements of an array of integers.
 * @a: pointer to int array.
 * @n: the number of elements of the array to be printed.
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (index == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");
}
