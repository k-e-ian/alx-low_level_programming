#include <stdio.h>

/**
 * main - Entry mode
 *
 * variable assignment 
 *
 * wrtes all descriptions
 *
 * Return 0 for success
 */
int main (void)
{
	int a, b, c;

	for (a = '0'; a <= '9'; a++)
	{
		for ( b = '0'; b <= '9'; b++)
		{
			for (c = '0'; c <= '9'; c++)
			{
				if ((a < b) & (b < c) & (c <= '9'))
				{
					putchar(a);
					putchar(b);
					putchar(c);

					if ((a + b + c) < 168)
					{
					putchar(',');
						putchar(' ');
					}
				}
			}
		}
			
	}
	putchar('\n');
	return (0);
}
