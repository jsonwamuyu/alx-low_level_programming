#include <stdio.h>

/**
 * main - entry point
 * Return: Always 0 (Success)
 */


int main(void)
{
	char a;
	char A;

	a = 'a';
	A = 'A';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	while (A <= 'z')
	{
		putchar(A);
		A++;
	}
	putchar('\n')
	return (0);
}
