#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: Pointer to the first element of the matrix.
 * @size: Size of the matrix.
 */
void print_diagsums(int *a, int size)
{
	int i, diag_sum1 = 0, diag_sum2 = 0;

	for (i = 0; i < size; i++)
	{
		/* Sum of elements on the main diagonal */
		diag_sum1 += *(a + (i * size) + i);
		/* Sum of elements on the other diagonal */
		diag_sum2 += *(a + (i * size) + (size - i - 1));
	}

	printf("%d, %d\n", diag_sum1, diag_sum2);
}
