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

	for (a = 0; a <= 99; a++)
	{
		for (z = 0; z <= 99; z++)
		{
			if (a < z)
			{
				putchar((a / 10) + '0');
				putchar((a % 10) + '0');
				putchar(' ');
				putchar((z / 10) + '0');
				putchar((z % 10) + '0');

				if ((a != 98) || (z != 99))
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
