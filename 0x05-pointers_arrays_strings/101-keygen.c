#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate random valid passwords for the program 101-crackme
 * Return: always 0
 */
int main(void)
{
	int random_number;
	int counter;
	int total;

	srand(time(NULL));
	for (counter = 0, total = 2772; total > 122; counter++)
	{
		random_number = (rand() % 125) + 1;
		printf("%c", random_number);
		total -= random_number;
	}
	printf("%c", total);

	return (0);
}
