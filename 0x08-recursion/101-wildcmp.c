#include "main.h"

/**
 * wildcmp - Compare two strings and check if they are identical,
 *	allowing for wildcard pattern matching.
 * @s1: The first string to compare.
 * @s2: The second string to compare, which can contain the
 *	special character '*'.
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	/* Base case: Both strings are empty, considered identical */
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}

	/**
	 * If s2 contains '*', recursively match remaining characters in
	 * s1 or skip '*' in s2
	 */
	if (*s2 == '*')
	{
		if (*s1 == '\0')
			/* Skip '*' in s2 and continue matching */
			return (wildcmp(s1, s2 + 1));
		else if (wildcmp(s1 + 1, s2) == 1)
			/* Match remaining s1 characters with '*' in s2 */
			return (1);
		/* Skip '*' in s2 and continue matching */
		return (wildcmp(s1, s2 + 1));
	}

	/**
	 * If characters match, recursively match next characters
	 * in both strings
	 */
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	/* Characters don't match */
	return (0);
}
