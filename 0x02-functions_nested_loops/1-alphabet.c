#include <stdio.h>

/**
 * print_alphabet - definition
 *
 * for loop
 *
 * putchar function
 */
void print_alphabet(void)
{
	char alpha = 'a';

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
}
