#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - generate a password for crackme5
 * @ac: argument count
 * @av: argument vector
 * Return: 0
 */
int main(int ac, char *av[])
{
	int len = strlen(av[1]), i, temp;
	char pass[7];
	char *l = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	(void)ac;
	temp = (len ^ 59) & 63;
	pass[0] = l[temp];

	temp = 1;
	for (i = 0; i < len; i++)
		temp *= av[1][i];
	pass[1] = l[(temp ^ 79) & 63];

	temp = 1;
	for (i = 0; i < len; i++)
		temp *= av[1][i];
	pass[2] = l[(temp ^ 85) & 63];

	temp = 0;

	for (i = 0; i < len; i++)
	{
		if (av[1][i] > temp)
			temp = av[1][i];
	}
	srand(temp ^ 14);
	pass[3] = l[rand() & 63];

	temp = 0;
	for (i = 0; i < len; i++)
		temp += (av[1][i] * av[1][i]);
	pass[4] = l[(temp ^ 239) & 63];

	for (i = 0; i < av[1][0]; i++)
		temp = rand();
	pass[5] = l[(temp ^ 229) & 63];

	pass[6] = '\0';
	printf("%s", pass);
	return (0);
}
