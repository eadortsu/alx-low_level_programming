#include "holberton.h"
/**
 * _puts - a function to print a string
 * @str: the string to be used.
 */
void _puts(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
