#include <stdio.h>

/**
 * main - Entry mode
 *
 * variable assignment and type
 *
 * forloop function
 *
 * putchar function
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alph = 'a';

	for (alph = 'a'; alph <= 'z'; alph++)
		putchar(alph);
			putchar('\n');
	return (0);
}
