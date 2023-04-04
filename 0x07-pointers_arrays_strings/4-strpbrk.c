#include "main.h"

/**
 *  _strpbrk- function that searches a string for any of a set of bytes.
 *  @s: first string
 *  @accept: second string
 *  Return: pointer to s
 */


char *_strpbrk(char *s, char *accept)
{
	char *pr;

	while (*s)
	{
		for (pr = accept; *pr; pr++)
		{
			if (*s == *pr)
			{
				return (s);
			}
		}
		s++;
	}

	return ('\0');
}
