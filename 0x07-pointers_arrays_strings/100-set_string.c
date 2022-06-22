#include "main.h"
#include <stdio.h>
/*
 * set_string: sets the value of a pointer to a char
 * @s: source string
 * @to: value to which the string is set up to.
 *
 */
void set_string(char **s, char *to)
{
	char *p, **q;
	int i = 0;

	while (s[i] != '\0')
	{
		*p =  &i;
		**q = &p;
	
	}
	
	printf("a=%d\n",**q);
		
}

