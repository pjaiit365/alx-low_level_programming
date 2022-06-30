#include "main.h"

/**
 * _strpbrk - searches string for a set of bytes
 * @s: source string
 * @accept: string to compare the bytes
 * Return: string matching one of the bytes with character found
 */

char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
		b = 0;

		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}

			b++;
		}

		a++;
	}

	return ('\0');
}
