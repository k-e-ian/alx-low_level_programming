#include <stdio.h>

/**
 * _strcmp - compare two strings
 *
 * @s1: string1 to be compared with
 *
 * @s2: string to compare with
 *
 * Return: positive integer if s1>s2, negative integer if s1<s2, else zero
 */
int _strcmp(char *s1, char *s2)
{
	int index = 0;
	int index2 = 0;
	int result;

	if (s1[index++] > s2[index2++])
	{
		result = (s1[index++] - s2[index2++]);
	}
	else if (s1[index++] < s2[index2++])
	{
		result = (s1[index++] - s2[index2++]);
	}
	else if (s1[index++] == s2[index2++])
	{
		result = 0;
	}
	return (result);
}
