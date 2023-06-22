#include <stdio.h>

/**
 * print_name - prints a name using a given function.
 * @name: name of the person.
 * @f: function pointer to the printing function.
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
