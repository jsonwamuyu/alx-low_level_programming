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
		while(A <= "Z")
		{
			putchar(a);
			putchar(A);
			A++;
		}
		a++;
	}
	return (0);
}
