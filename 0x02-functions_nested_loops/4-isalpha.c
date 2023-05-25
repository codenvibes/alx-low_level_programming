#include "main.h"

/**
 * _isalpha - entry point.
 * Description:  a function that checks for alphabetic characters
 * @c: the character to check.
 * Return: 1(alphabet) 0(otherwise).
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
