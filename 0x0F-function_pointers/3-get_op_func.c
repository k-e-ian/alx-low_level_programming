#include <stdio.h>
#include "3-cal.h"

/**
 *
 *
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
        	{"+", op_add},
        	{"-", op_sub},
        	{"*", op_mul},
        	{"/", op_div},
        	{"%", op_mod},
        	{NULL, NULL}
	};
	int i;
	i = 0;

	while (i < 5)
	{
		if (char *
}