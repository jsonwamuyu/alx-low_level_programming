#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function declaration
 * @str: string pointer
 * Return: string
 */

char *_strdup(char *str);

/**
 * _strdup - function definition
 * @str: a string pointer
 * Description: duplicates a string
 * Return: a string value
 */

char *_strdup(char *str)
{
	char *dup_str;

	if (str == NULL)
		return (NULL);
	dup_str = malloc(strlen(str) + 1);
	if (dup_str == NULL)
		return (NULL);
	strcpy(dup_str, str);
	return (dup_str);
}
