#include <stdio.h>
#include <unistd.h>

/**
 * main - a program that prints the alphabet in lowercase.
 * Description: Using the putchar function only.
 * Return: 0(success).
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
