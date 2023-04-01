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
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}
