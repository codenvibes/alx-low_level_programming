#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 * @s1: The string to be concatenated upon.
 * @s2: The string to be concatenated to s1.
 *
 * Return: If concatenation fails - NULL.
 *         Otherwise - a pointer the newly-allocated space in memory
 *                     containing the concatenated strings.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str; /* Declaring a pointer to store the concatenated string. */
	/* Declaring integer variables for indexing and length calculation */
	int index, concat_index = 0, len = 0;

	if (s1 == NULL)
		s1 = ""; /* If s1 is NULL, assign an empty string to it */

	if (s2 == NULL)
		s2 = ""; /* If s2 is NULL, assign an empty string to it. */

	/* Calculate the length of the concatenated string */
	for (index = 0; s1[index] || s2[index]; index++)
		len++;

	/* Allocate memory for the concatenated string */
	concat_str = malloc(sizeof(char) * len);

	if (concat_str == NULL)
		return (NULL); /* If memory allocation fails, return NULL */

	/* Copy characters from s1 to the concatenated string */
	for (index = 0; s1[index]; index++)
		concat_str[concat_index++] = s1[index];

	/* Copy characters from s2 to the concatenated string */
	for (index = 0; s2[index]; index++)
		concat_str[concat_index++] = s2[index];

	return (concat_str);/* Return the pointer to the concatenated string */
}
