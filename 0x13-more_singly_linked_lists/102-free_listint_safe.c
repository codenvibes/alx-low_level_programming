/*
 * File: 102-free_listint_safe.c
 * Auth: Terrence M.K
 */

#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list.
 * @h: Pointer to a pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *temp;
	size_t size = 0;

	if (h == NULL || *h == NULL)
		return (size);

	current = *h;
	while (current != NULL)
	{
		size++;
		if (current->next >= current)
		{
			free(current);
			break;
		}
		temp = current;
		current = current->next;
		free(temp);
	}

	*h = NULL;

	return (size);
}

