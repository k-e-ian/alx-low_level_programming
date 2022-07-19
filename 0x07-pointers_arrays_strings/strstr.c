#include <stdio.h>

char *_strstr(char *haystack, char *needle);

int main(void)
{
	char *s = "hello, world";
	char *f = "world";
	char *t;

	t = _strstr(s, f);
	printf("%s\n", t);
	return (0);
}

char *_strstr(char *haystack, char *needle)
{
	const char *a = haystack, *b = needle;
	for (;;) 
	{
		if ( !*b ) 
			return (char *) haystack;
		if ( !*a ) 
			return NULL;
		if ( *a++ != *b++) 
		{ 
			a = ++haystack; b = needle;
		}
	 }
}
