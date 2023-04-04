#include "main.h"

/**
 * _strspn - function to get the length of a prefix string
 * @s: string one
 * @accept: string two
 * Return: length
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b, len;

	len = 0;

	for (a = 0; s[a]; a++)
	{
		for (b = 0; accept[b]; b++)
		{
			if (s[a] == accept[b])
			{
				len++;
				break;
			}
		}
		if (!accept[b])
		{
			break;
		}
	}
	return (len);
}
