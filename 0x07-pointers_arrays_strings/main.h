#define MAIN_H

/**
 * _putchar - puts character to standard output
 * @c: character to put to standard output
 */

int _putchar(char c);

/**
 * _memset - fills memory with constant byte
 * @s: fill memory to this buffer
 * @b: source to fill
 * @n: n bytes to fill with
 * Return: filled memory
 */

char *_memset(char *s, char b, unsigned int n);

/**
 * _memcpy - copies memory area
 * @dest: copy memory area to this buffer
 * @src: memory area to copy from
 * @n: n bytes to copy
 * Return:  copied memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _strchr - locates character in a string
 * @s: string
 * @c: character to locate
 * Return: string where the character is found
 */

char *_strchr(char *s, char c);

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to source
 * @accept: accepted string
 * Return: number of bytes in the initial segment which is the accepted string
 */

unsigned int _strspn(char *s, char *accept);

/**
 * _strpbrk - searches string for a set of bytes
 * @s: source string
 * @accept: string to compare the bytes
 * Return: string matching one of the bytes with character found
 */

char *_strpbrk(char *s, char *accept);

/**
 * _strstr - locate a substring
 * @haystack: string
 * @needle: substring
 * Returns: pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle);

/**
 * print_chessboard - prints the chessboard
 * @a: array of pieces
 */

void print_chessboard(char (*a)[8]);

void set_string(char **s, char *to);
