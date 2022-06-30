#include "main.h"

/**
 * _strchr - locates character in a string
 * @s: string
 * @c: character to locate
 * Return: string where the character is found
 */

char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
	{
		a++;
	}

	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}
	return ('\0');
}
