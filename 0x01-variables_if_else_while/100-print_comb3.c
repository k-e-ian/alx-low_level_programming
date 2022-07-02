#include <stdio.h>

/**
 * main - Entry mode
 *
 * variable assignment and type
 *
 * while loop
 *
 * if function
 *
 * putchar function
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, z;

	for (a = '0'; a <= '9'; a++)
	{
		for (z = '0'; z <= '9'; z++)
		{
			if ((a < z) & (z <= '9'))
			{
				putchar(a);
					putchar(z);
						if ((z < '9') | (a < '8'))
						{
							putchar(',');
								putchar(' ');
						}
			}
		}
	}
	putchar('\n');
	return (0);
}
