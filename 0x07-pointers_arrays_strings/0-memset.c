/**
 * _memset - a function that fills memory with a constant byte.
 *	The _memset() function fills the first n bytes of the memory
 *	area pointed to by s with the constant byte b.
 * @s: pointer to a memory area.
 * @b: constant byte to fill memory.
 * @n: number of bytes to fill.
 *
 * Return: *s (pointer to the memory area s).
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
