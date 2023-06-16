#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers from min to max (inclusive),
 * ordered from min to max.
 *
 * @min: The minimum value of the array.
 * @max: The maximum value of the array.
 * Return: Pointer to the newly created array.
 *	If min > max, returns NULL.
 *	If memory allocation fails, returns NULL.
 */

int *array_range(int min, int max)
{
	int *array, i;

	if (min > max)
		return (NULL);

	array = (int *)malloc((max - min + 1) * sizeof(int));

	if (array == NULL)
		return (NULL);

	for (i = 0; i <= max - min; i++)
		array[i] = min + i;

	return (array);
}
