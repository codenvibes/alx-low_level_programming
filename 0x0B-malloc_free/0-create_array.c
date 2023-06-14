#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars,i
 *	and initializes it with a specific char.
 * @size: The size of the array to be initialized.
 * @c: The specific char to intialize the array with.
 *
 * Return: If size == 0 or the function fails - NULL.
 *         Otherwise - a pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0) /* Check if size is 0 */
		return (NULL); /* Return NULL if size is 0 */

	array = malloc(sizeof(char) * size);
	/* Allocate memory for the array dynamically */

	if (array == NULL) /* Check if the memory allocation failed */
		return (NULL); /* Return NULL if the memory allocation failed */

	for (index = 0; index < size; index++)
	/* Loop through each element of the array */
		array[index] = c; /* Set each element of the array to the specific char */

	return (array); /* Return the pointer to the array */
}
