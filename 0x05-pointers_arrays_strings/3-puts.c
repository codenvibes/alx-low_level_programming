#include "main.h"

/**
 * _puts- a function that prints a string, followed by a new line, to stdout.
 * @str: string.
 * Return: void.
 */

void _puts(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
		_putchar(*str);
	}
	_putchar('\n');
}
