#include <stdio.h>

/**
 * main - Entry mode
 *
 * Variable assignment and type
 *
 * forloop
 * putchar function
 *
 * variable reassignment
 *
 * forloop
 * putchar function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int hex  = '0';

	for (hex = '0'; hex <= '9'; hex++)
		putchar(hex);
	{
	int hex = 'a';

		for (hex = 'a'; hex <= 'f'; hex++)
			putchar(hex);
				putchar('\n');
	}
	return (0);
}
