#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings followed by a new line.
 * @separator: The string to be printed between the strings.
 * @n: The number of strings passed to the function.
 *            (variadic arguments)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	const char *str;

	va_start(args, n); /*  Initialize the argument list */

	for (i = 0; i < n; i++)
	{
		/* Get the next argument of type const char * */
		str = va_arg(args, const char *);

		if (str == NULL)
			printf("(nil)"); /* Print "(nil)" if the string is NULL */
		else
			printf("%s", str); /* Print the string */

		if (separator != NULL && i != n - 1)
			/* Print the separator if it's not NULL and not the last string */
			printf("%s", separator);
	}

	va_end(args); /* Clean up the argument list */

	printf("\n"); /* Print a new line */
}
