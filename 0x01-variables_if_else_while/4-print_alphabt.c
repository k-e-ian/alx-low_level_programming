#include <stdio.h>

/**
 * main - Entry mode
 *
 * variable assignment and type
 *
 * while function
 *
 * else if function
 *
 * putchar function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		if (alph == 'q')
		{
			alph++;
		}
		else if (alph == 'e')
		{
			alph++;
		}
		else
		{
			putchar(alph);
			alph++;
		}
	}
	putchar('\n');
	return (0);
}
