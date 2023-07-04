/*
 * File: 0-print_listint.c
 * Auth: Terrence M.K
 */

#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;	      /* Increment the count */
		printf("%d\n", h->n);
		h = h->next;          /* Move to the next node */
	}

	return (count);
}
