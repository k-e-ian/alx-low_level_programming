#include <stdio.h>

/**
 * main - Entry mode
 *
 * forloop function
 *
 * putchar function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alph = 'a';
	char upp = 'A';

	for (alph = 'a'; alph <= 'z'; alph++)
		putchar(alph);
	for (upp = 'A'; upp <= 'Z'; upp++)
		putchar(upp);
			putchar('\n');
	return (0);
}
