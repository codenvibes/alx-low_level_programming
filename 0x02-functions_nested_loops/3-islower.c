#include "main.h"

/**
 * _islower - Entry point.
 * Description: a function that checks for lowercase character.
 * @c: character to check.
 * Return: 1(lowercase) 0(otherwise).
 */

int _islower(int c)
{
	if (c >= 97 && c >= 122)
		return (1);
	else
		return (0);
}
