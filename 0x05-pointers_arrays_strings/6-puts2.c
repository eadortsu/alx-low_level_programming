#include "main.h"

/**
* puts2 - prints every other character of a string,
* starting with the first character, followed by a new line
* @str: pointer character variable
*/
void puts2(char *str)
{
int i;
int len = 0;
char *s = str;

while (*s != '\0')
{
len++;
s++;
}

for (i = 0; str[i] != '\0' && i < len; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
