#include <stdio.h>

int main(void)
{
	int a = 1;

	int *p;

	p = &a;

	printf("address of a is: %p\n", &a);
	printf("value of p is: %p\n", p);
	printf("value of a is: %d\n", a);

	*p = 20;

	printf("value of a is: %d\n", a);

	return (0);
}
