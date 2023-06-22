#include <stdio.h>

/**
 * array_iterator - a function that executes a function on each
 * element of an array.
 * @array: Pointer to the array.
 * @size: Size of the array.
 * @action: Pointer to the function to be executed on each element.
 *
 * Return: None.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
