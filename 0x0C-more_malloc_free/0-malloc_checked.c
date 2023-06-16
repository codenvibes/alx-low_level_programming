#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc and
 * terminates the process if malloc fails.
 * If malloc fails, the function causes normal process termination with a
 * status value of 98.
 *
 * @b: The size of memory to allocate in bytes.
 * Return: A pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
