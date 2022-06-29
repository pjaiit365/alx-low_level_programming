#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: fill memory to this buffer
 * @b: source to fill
 * @n: n bytes to fill with
 * Return: filled memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}
