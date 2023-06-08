#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string using
 *	recurson.
 * @s: The string to return length of.
 *
 * Return: The length of the string.
 */

int _strlen_recursion(char *s)
{
	/* Base case: Check if the current character is the end of the string */
	if (*s == '\0')
		/* If it is, return 0 to indicate the length is 0 */
		return (0);
	else
		/* If it is not the end of the string */
		/* make a Recursive call */
		/* by passing the address of the next character in the string */
		/* and add 1 to the length returned by the recursive call */
		return (1 + _strlen_recursion(s + 1));
}
