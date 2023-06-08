#include "main.h"

/**
 * string_length -  Calculates the length of a string recursively.
 *
 * @s: The input string.
 * Return: The length of the string.
 */
int string_length(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + string_length(s + 1));
}

/**
 * is_palindrome_recursive - Checks if a string is a palindrome recursively.
 *
 * @start: Pointer to the start of the string.
 * @end: Pointer to the end of the string.
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome_recursive(char *start, char *end)
{
	if (start >= end)
		return (1);

	if (*start != *end)
		return (0);

	return (is_palindrome_recursive(start + 1, end - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 *
 * @s: The input string.
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int length;

	if (*s == '\0')
		return (1);

	length = string_length(s);

	return (is_palindrome_recursive(s, s + length - 1));
}
