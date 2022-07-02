#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates array of integers
 * @min: range starts from
 * @max: end range at
 * Return: newly created array
 */

int *array_range(int min, int max)
{
	int *a, i = 0;

	if (min > max)
		return (NULL);

	a = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (a == NULL)
		return (NULL);

	while (min <= max)
	{
		a[i] = min;
		i++;
		min++;
	}

	return (a);
}
