#0x18. C - Dynamic libraries
C
 By: Julien Barbier
 Weight: 1
 Project will start Oct 3, 2022 6:00 AM, must end by Oct 4, 2022 6:00 AM
 will be released at Oct 3, 2022 12:00 PM
 An auto review will be launched at the deadline

#Tasks
0. A library is not a luxury but one of the necessities of life
mandatory
Create the dynamic library libdynamic.so containing all the functions listed below:

int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
If you haven’t coded all of the above functions create empty ones, with the right prototype.
Don’t forget to push your main.h file in your repository, containing at least all the prototypes of the above functions.
