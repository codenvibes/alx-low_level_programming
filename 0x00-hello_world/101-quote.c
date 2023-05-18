#include <stdio.h>
#include <unistd.h>
/**
 * main - a C program that prints exactly and that piece of art is useful"
 *	- Dora Korpar, 2015-10-19, followed by a new line, to the standard error.
 * Description: You are not allowed to use any functions listed in the NAME
 *	section of the man (3) printf or man (3) puts.
 *	Your program should return 1.
 * Return: 0(success)
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
