#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: a program that prints all the numbers of base 16 in lowercase
 * Return: Always 0 (success)
 */
int main(void)
{
        char y;
        char v = '0';

        while (v <= '9')
        {
                putchar(v);
                v++;
        }
        for (y = 'a'; y <= 'f'; y++)
        {
                putchar(y);
        }
        putchar('\n');
        return (0);
}