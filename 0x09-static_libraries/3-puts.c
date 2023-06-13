#include "main.h"

/**
 * _puts - prints string to stdout,
 * followed by new line.
 * @str: String to print.
 */
void _puts(char *str)
{
	int i = 0;
	char c = str[0];

	while (c != '\0')
	{
		_putchar(c);
		i++;
		c = str[i];
	}
	_putchar('\n');
}
