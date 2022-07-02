#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - puts character to standard output
 * @c: character to put to standard output
 */

int _putchar(char c);

/**
 * malloc_checked - allocates memory
 * @b: size to allocate
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b);

/**
 * string_nconcat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: n bytes to concat
 * Return: length of string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n);

/**
 * _calloc - uses malloc to allocate memory to an array
 * @nmemb: size
 * @size: datatype size
 * Return: pointer to calloc'd string
 */

void *_calloc(unsigned int nmemb, unsigned int size);

/**
 * array_range - creates array of integers
 * @min: range starts from
 * @max: end range at
 * Return: newly created array
 */

int *array_range(int min, int max);

/**
 * _realloc - uses malloc and free to reallocate a memory block
 * @ptr: pointer t emory previously allocated (malloc(old_size))
 * @old_size: previous allocated size
 * @new_size: new size to reallocated
 * Return: reallocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int main(int argc, char **argv);
#endif
