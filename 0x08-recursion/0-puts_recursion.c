#include "main.h"

/**
 * _puts_recursion - a function that prints a string, followed by a new line.
 * @s: The string to be printed.
 */

void _puts_recursion(char *s)
{
	if (*s) /* Recursion Base case : This condition checks if the current
		  * character being pointed to by *s is not the null terminator
		  * ('\0').
		   */
	{
		/* Call to _putchar function defined in '_putchar.c' */
		_putchar(*s);
		/* Recursive call */
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
