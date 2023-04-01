#include "main.h"

/**
 * _strncpy - function copy a string
 * @dest: Destination
 * @src: source string
 * @n: No. of chracters to be copied
 * Return: dest(Copied string)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (i = 0; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
