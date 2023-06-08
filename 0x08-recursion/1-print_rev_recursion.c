#include "main.h"

/**
 * _print_rev_recursion - a function that prints a string in reverse
 *	using recursion.
 * @s: The string to be printed in reverse.
 */

void _print_rev_recursion(char *s)
{
	/* Base case: check if the current character is the null terminator */
	if (*s == '\0')
		return;

	/* Recursive call: move to the next character inthe string */
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
