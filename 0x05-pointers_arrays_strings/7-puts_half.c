#include "main.h"

/**
 * puts_half - function that prints half of a string, followed by a new line.
 * @str: String to print
 * Return: 0
 */

void puts_half(char *str)
{
	int i, c, count;

	count = 0;

	for (i = 0; str[i] != '\0'; i++)
		count++;
	for (c = (count / 2); c <=  count; c++)
		_putchar(str[c]);
	_putchar('\n');
}
