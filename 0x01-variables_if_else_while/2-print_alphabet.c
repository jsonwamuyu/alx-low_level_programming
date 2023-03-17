#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * Return: Always 0 (Success)
 */


int main(void)
{
	char a;

	a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
