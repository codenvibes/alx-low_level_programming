#include <stdio.h>
#include <unistd.h>

/**
 * main - a program that prints the alphabet in lowercase,
 *	and then in uppercase.
 * Description: Using the putchar function only.
 *	You can only use putchar three times in your code.
 * Return: 0(success).
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}

