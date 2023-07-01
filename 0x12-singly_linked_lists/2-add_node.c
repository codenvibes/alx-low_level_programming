#include "lists.h"
#include <string.h>

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Pointer to a pointer to the head node.
 * @str: The string to be duplicated and stored in the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;

	/* Create new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/* Calculate the length of the string */
	while (str[len])
		len++;

	new_node->str = strdup(str);

	/* Set the length of the string */
	new_node->len = len;

	/* Set the next pointer to the current head */
	new_node->next = *head;

	/* Update the head to point to the new node */
	*head = new_node;

	return (new_node);
}

