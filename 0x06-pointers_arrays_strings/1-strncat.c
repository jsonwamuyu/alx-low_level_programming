#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * @dest: String one
 * @src: String two
 * @n: number of char to append
 * Return: New concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int destlen;
	int srclen;

	destlen = 0;
	srclen = 0;

	for (i = 0; src[i] != '\0'; i++)
		srclen++;
	for (i = 0; dest[i] != '\0'; i++)
		destlen++;
	for (i = 0; i < n; i++)
		dest[destlen + i] = src[i];
	return (dest);
}
