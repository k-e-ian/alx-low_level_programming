#include <stdio.h>

void print_alphabet(void)
{
	char alpha = 'a';
	
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
}
