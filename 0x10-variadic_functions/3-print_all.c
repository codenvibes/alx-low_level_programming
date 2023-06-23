#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - Prints a character argument.
 * @args: Variable argument list.
 */
void print_char(va_list args)
{
	int c = va_arg(args, int);

	printf("%c", c);
}

/**
 * print_int - Prints an integer argument.
 * @args: Variable argument list.
 */
void print_int(va_list args)
{
	int i = va_arg(args, int);

	printf("%d", i);
}

/**
 * print_float - Prints a float argument.
 * @args: Variable argument list.
 */
void print_float(va_list args)
{
	double f = va_arg(args, double);

	printf("%f", f);
}

/**
 * print_string - Prints a string argument.
 * @args: Variable argument list.
 */
void print_string(va_list args)
{
	char *s = va_arg(args, char *);

	if (s == NULL)
		printf("(nil)");
	else
		printf("%s", s);
}

/**
 * print_all - Prints arguments based on the provided format.
 * @format: List of types of arguments passed to the function.
 *          c: char
 *          i: integer
 *          f: float
 *          s: char * (if the string is NULL, print (nil) instead)
 */
void print_all(const char * const format, ...)
{
	va_list args;
	const char *ptr = format;
	char c;

	va_start(args, format);

	while (ptr && *ptr)
	{
		c = *ptr;
		ptr++;

		if (*ptr)
		{
			if (c == 'c')
				print_char(args);
			else if (c == 'i')
				print_int(args);
			else if (c == 'f')
				print_float(args);
			else if (c == 's')
				print_string(args);

			printf(", ");
		}
	}

	va_end(args);
	printf("\n");
}
