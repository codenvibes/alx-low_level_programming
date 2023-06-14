#include "main.h"
#include <stdlib.h>

/**
 * argstostr - a function that concatenates all the arguments of your program.
 * @ac: The number of arguments passed to the program.
 * @av: An array of pointers to the arguments.
 *
 * Return: If ac == 0, av == NULL, or the function fails - NULL.
 *         Otherwise - a pointer to the new string.
 */
char *argstostr(int ac, char **av)
{
	char *str; /* Declare a pointer to a character (string) */
	/* Declare integers for iteration and size tracking */
	int arg, byte, index, size = ac;

	/* If no arguments were passed or the argument array is NULL */
	if (ac == 0 || av == NULL)
		return (NULL);

	for (arg = 0; arg < ac; arg++) /* Iterate over the arguments */
	{
		/* Iterate over each character of the argument string */
		for (byte = 0; av[arg][byte]; byte++)
			/* Increment the size counter for each character */
			/* in the argument string */
			size++;
	}
	/* Allocate memory for the new string */
	str = malloc(sizeof(char) * size + 1);

	if (str == NULL)
		return (NULL);

	index = 0;

	for (arg = 0; arg < ac; arg++) /* Iterate over the arguments */
	{
		/* Iterate over each character of the argument string */
		for (byte = 0; av[arg][byte]; byte++)
			/* Copy the character to the new string and */
			/* increment the index */
			str[index++] = av[arg][byte];

		str[index++] = '\n';
	}
	/* Add a null terminator at the end of the new string */
	str[size] = '\0';

	return (str); /* Return the pointer to the new string */
}
