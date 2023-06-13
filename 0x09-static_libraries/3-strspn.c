/**
 * _strspn - calculates the length of a prefix substring
 * @s: the string to be evaluated
 * @accept: the bytes that are considered part of the substring
 *
 * Return: the number of bytes in the initial segment of s
 *	consisting only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j, found;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}

		if (!found)
			break;
		count++;
	}

	return (count);
}
