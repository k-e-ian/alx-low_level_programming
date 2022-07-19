#include <stdio.h>

/**
 * _strspn - count the lenght of bytes match in s from accept
 *
 * @s: pointer to string 1
 *
 * @accept: pointer to sting 2
 *
 * Return: Null if no matches, otherwise length in byte of matches
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int num = 0;
	int index;
	int index2;

	for (index = 0; s[index] != '\0'; index++)
	{
		for (index2 = 0; accept[index2] != '\0'; index2++)
		{
			if (s[index] == accept[index2])
			{
				num++;
				break;
			}
			else if (accept[index2 + 1] == '\0')
				return (num);
		}
	}
	return (num);
}
