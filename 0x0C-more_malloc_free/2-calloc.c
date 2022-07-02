#include <stdlib.h>
#include "main.h"

/**
 * _calloc - uses malloc to allocate memory to an array
 * @nmemb: size
 * @size: datatype size
 * Return: pointer to calloc'd string
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, l = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	l = nmemb * size;
	p = malloc(l);

	if (p == NULL)
		return (NULL);

	while (i < l)
	{
		p[i] = 0;
		i++;
	}

	return (p);
}
