#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: size_t parameter
 *
 * Return: void pointer
 */
void *malloc_checked(unsigned int b)
{
	void *checker = malloc(sizeof(checker) * b);

	if (checker == NULL)
		exit(98);

	return (checker);
}
