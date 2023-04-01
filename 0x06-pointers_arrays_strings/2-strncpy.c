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

	i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
