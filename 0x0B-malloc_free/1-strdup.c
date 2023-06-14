#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 *           containing a copy of the string given as parameter.
 * @str: The string to be copied.
 * Return: If str == NULL or insufficient memory was available - NULL.
 *         Otherwise - a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *duplicate; /* Declare a pointer variable to hold the duplicate string */
	int index, len = 0;/* Declare variables for indexing and length calculation */

	if (str == NULL)
		return (NULL); /* If the input string is NULL, return NULL */

	for (index = 0; str[index]; index++)
		len++; /* Calculate the length of the input string */

	duplicate = malloc(sizeof(char) * (len + 1));
	/* Allocate memory for the duplicate string */

	if (duplicate == NULL)
		return (NULL); /* If memory allocation failed, return NULL */

	for (index = 0; str[index]; index++)
		duplicate[index] = str[index];
		/* Copy each character from the input string to the duplicate string */

	duplicate[len] = '\0';
	/* Add the null terminator at the end of the duplicate string */

	return (duplicate);
	/* Add the null terminator at the end of the duplicate string */
}
