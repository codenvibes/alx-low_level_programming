/**
 * _strcpy - Copies a string pointed to by @src, including the
 *           terminating null byte, to a buffer pointed to by @dest.
 *
 * @dest: a buffer where the string is copied
 * @src: cource string to be copied
 *
 * Return: pointer to @dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
