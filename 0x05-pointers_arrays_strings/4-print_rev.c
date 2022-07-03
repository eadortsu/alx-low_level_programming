#include "holberton.h"
/**
 * print_rev - a function to print a string in rev
 * @s: the rev string.
 */
void print_rev(char *s)
{
int i = 0;
int count;


for (count = 0; s[count] != '\0'; count++)
{
}
for (i = count - 1; i >= 0; i--)
{
_putchar (s[i]);
}
_putchar('\n');
}
