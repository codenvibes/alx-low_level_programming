/*
 * File: 10-delete_nodeint.c
 * Auth: Terrence M.K
 */

#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given position in a list.
 * @head: Double pointer to the head node of the list.
 * @index: The index of the node to be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	current = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
	}

	temp = current->next;
	if (temp == NULL)
		return (-1);

	current->next = temp->next;
	free(temp);

	return (1);
}
