#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times.
 */

void print_alphabet_x10(void)
{
	char alphabet;
	int count = 0;

	while (count <= 10)
	{
		alphabet = 'a';
		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
		count++;
	}
}
