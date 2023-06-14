#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the minimum number of coins to make change
 *	for an amount of money.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: If the number of arguments is not exactly one - 1.
 *         Otherwise - 0.
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2) /* Check if the number of arguments is not exactly one */
	{
		printf("Error\n"); /* Print an error message */
		return (1); /* Return 1 to indicate an error */
	}

	cents = atoi(argv[1]);
	/* Convert the argument to an integer and assign it to cents */

	while (cents > 0) /* Loop until cents becomes 0 */
	{
		coins++; /* Increment the number of coins used */
		if ((cents - 25) >= 0) /* Check if subtracting 25 from cents is possible */
		{
			cents -= 25; /* Subtract 25 from cents */
			continue; /* Skip to the next iteration of the loop */
		}
		if ((cents - 10) >= 0) /* Check if subtracting 10 from cents is possible */
		{
			cents -= 10; /* Subtract 10 from cents */
			continue; /* Skip to the next iteration of the loop */
		}
		if ((cents - 5) >= 0) /* Check if subtracting 5 from cents is possible */
		{
			cents -= 5; /* Subtract 5 from cents */
			continue; /* Skip to the next iteration of the loop */
		}
		if ((cents - 2) >= 0) /* Check if subtracting 2 from cents is possible */
		{
			cents -= 2; /* Subtract 2 from cents */
			continue; /* Skip to the next iteration of the loop */
		}

		cents--; /* Subtract 1 from cents */
	}
	printf("%d\n", coins); /* Print the minimum number of coins */
	return (0); /* Return 0 to indicate successful execution */
}

