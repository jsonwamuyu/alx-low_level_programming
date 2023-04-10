#include "main.h"

/**
 * _puts_recursion - function that prints a string
 * @s: string to print
 */

void _puts_recursion(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
