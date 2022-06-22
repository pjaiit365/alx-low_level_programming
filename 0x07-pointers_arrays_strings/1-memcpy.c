#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: copy memory area to this buffer
 * @src: memory area to copy from
 * @n: n bytes to copy
 * Return:  copied memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}

	return (dest);
}
