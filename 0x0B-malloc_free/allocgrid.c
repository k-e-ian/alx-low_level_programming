#include <stdio.h>
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
	int **twoD, i;
	twoD = malloc(width * sizeof(int *));
	for (i = 0; i < width; i++)
	{
		twoD[i] = malloc(height * sizeof(int));
	}
	return (twoD);
}
