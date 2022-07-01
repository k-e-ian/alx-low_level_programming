#include <stdio.h>

/**
 * main - Entry mode
 *
 * variable assignment and type
 *
 * for-loop function 
 *
 * putchar function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alph = 'z';

	for (alph = 'z'; alph >= 'a'; alph--)
		putchar(alph);
			putchar('\n');
	return (0);
}
