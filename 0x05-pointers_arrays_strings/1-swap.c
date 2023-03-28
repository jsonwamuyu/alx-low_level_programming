#include "main.h"

/**
 * swap_int - function that swap values of two integers
 * @a: first number
 * @b: second number
 * Return - 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
