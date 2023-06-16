#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings, s1 and s2,
 * with the first n bytes of s2.
 * The returned pointer points to a newly allocated space in
 * memory that contains.
 * s1, followed by the first n bytes of s2, and is null-terminated.
 * If the function fails to allocate memory, it returns NULL.
 *
 * @s1: The first input string. If NULL, treated as an empty string.
 * @s2: The second input string. If NULL, treated as an empty string.
 * @n: The number of bytes to concatenate from s2.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t len1, len2, concat_len;
	char *concat;

	/* Handle NULL strings as empty strings */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Get the lengths of the input strings */
	len1 = strlen(s1);
	len2 = strlen(s2);

	/* Adjust n if it's greater than or equal to the length of s2 */
	if (n >= len2)
		n = len2;

	/* Allocate memory for the concatenated string */
	concat_len = len1 + n;
	concat = (char *)malloc((concat_len + 1) * sizeof(char));

	if (concat == NULL)
		return (NULL);

	/* Copy the contents of s1 */
	strcpy(concat, s1);

	/* Copy the first n bytes of s2 */
	strncat(concat, s2, n);

	/* Null-terminate the concatenated string */
	concat[concat_len] = '\0';

	return (concat);
}
