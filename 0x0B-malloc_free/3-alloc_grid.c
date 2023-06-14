#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to a 2 dimensional
 *	array of integers.`
 * @width: The width of the 2-dimensional array.
 * @height: The height of the 2-dimensional array.
 *
 * Return: If width <= 0, height <= 0, or the function fails - NULL.
 *         Otherwise - a pointer to the 2-dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **twoD; /* Declare a pointer to a 2D array of integers */
	int hgt_index, wid_index; /* Declare variables for loop indices */

	/* Check if width or height is less than or equal to 0 */
	if (width <= 0 || height <= 0)
		return (NULL); /* Return NULL if width or height is invalid */

	/*  Allocate memory for the rows of the 2D array */
	twoD = malloc(sizeof(int *) * height);

	if (twoD == NULL) /* Check if memory allocation failed */
		return (NULL); /* Return NULL if memory allocation failed */

	for (hgt_index = 0; hgt_index < height; hgt_index++) /*Loop through the rows*/
	{
		/* Allocate memory for the columns of each row */
		twoD[hgt_index] = malloc(sizeof(int) * width);

		if (twoD[hgt_index] == NULL) /* Check if memory allocation failed */
		{
			/* Free the memory for previously allocated rows */
			for (; hgt_index >= 0; hgt_index--)
				free(twoD[hgt_index]);

			free(twoD); /* Free the memory for the rows */
			return (NULL); /* Return NULL if memory allocation failed */
		}
	}

	for (hgt_index = 0; hgt_index < height; hgt_index++) /*Loop through the rows*/
	{
		/* Loop through the columns */
		for (wid_index = 0; wid_index < width; wid_index++)
			twoD[hgt_index][wid_index] = 0; /* Initialize each element to 0 */
	}

	return (twoD); /* Return the pointer to the 2D array */
}
