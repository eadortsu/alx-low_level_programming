#include "main.h"

/**
* print_rev - prints a string, in reverse,
* followed by a new line.
* @s: string to be printed
*/
void print_rev(char *s)
{
int length = 0;
int i;

/* Iterate to get the length of the string and point to the last character */
while (*s != '\0')
{
length++;
s++;
}

/* Get to character before null terminator */
s--;

/* print characters reversed */
for (i = length; i > 0; i--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
