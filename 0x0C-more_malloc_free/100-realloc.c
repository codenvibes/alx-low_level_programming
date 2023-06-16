#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: Pointer to the memory previously allocated with malloc.
 * @old_size: Size of the allocated space for ptr, in bytes.
 * @new_size: New size of the memory block, in bytes.
 *
 * Return: Pointer to the reallocated memory block.
 *         If new_size is equal to zero and ptr is not NULL, returns NULL.
 *         If ptr is NULL, equivalent to malloc(new_size) and returns the
 *         pointer to the newly allocated memory.
 *         If new_size is equal to old_size, returns ptr without any changes.
 *         Otherwise, returns a pointer to the reallocated memory block.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	new_ptr = malloc(new_size);
	if (new_ptr != NULL)
	{
		memcpy(new_ptr, ptr, (old_size < new_size) ? old_size : new_size);
		free(ptr);
	}

	return (new_ptr);
}
