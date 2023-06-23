#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 *        (The ellipsis (...) indicates a variable number of arguments.)
 *
 * Description: This function takes a variable number of integers
 * and prints them with a specified separator between each number.
 * If the separator is NULL, it is not printed. A new line is printed
 * at the end of the output.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int num;

	/* Initialize the argument list */
	va_start(args, n);

	/* Iterate through the integers */
	for (i = 0; i < n; i++)
	{
		/* Get the next integer argument */
		num = va_arg(args, int);

		/* Print the number */
		printf("%d", num);

		/* Print the separator if it is not NULL and not the last number */
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	/* Clean up the argument list */
	va_end(args);

	/* Print a new line */
	printf("\n");
}
