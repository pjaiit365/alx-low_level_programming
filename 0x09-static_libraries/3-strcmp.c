#include "main.h"

/**
 * _strcmp - compares two string
 * @s1: string one
 * @s2: string two
 * Return: int that tells num spaces in between
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
