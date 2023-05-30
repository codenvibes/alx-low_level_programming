#include "main.h"

/**
 * _puts- a function that prints a string, followed by a new line, to stdout.
 * @str: string.
 * Return: void.
 */

void _puts(char *str)
{
	int a = 0;
	char i = str[0];

	while (i != '\0')
	{
		_putchar(i);
		a++;
		i = str[a];
	}
	_putchar('\n');
}
