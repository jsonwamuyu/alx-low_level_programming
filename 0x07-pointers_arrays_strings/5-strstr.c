#include "main.h"

/**
 *  _strstr - function that locatea substring
 *  @haystack: first string
 *  @needle: substring to search
 *  Return Located string
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		//Check if the first character of a needle matches
		if (haystack[i] == needle[0])
		{
			//start comparing the rest of the characters
			for (j = 1; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
				{
					break;
				}
			}
			if (needle[j] == '\0')
			{
				return (&haystack[i]); //needle found, return pointer to beginning
			}
		}
	}
	return ('\n');
}
