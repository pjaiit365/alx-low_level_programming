#include "main.h"

/**
 * _strncpy -  copies n bytes of a source into buffer of a destination string
 * @dest: copy source to this buffer
 * @src: source to copy
 * @n: n bytes to copy
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		for (; i < n; i++)

		dest[i] = '\0';
	}
	return (dest);
}
