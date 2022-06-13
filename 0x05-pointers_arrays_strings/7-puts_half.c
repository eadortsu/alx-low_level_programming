#include "holberton.h"
/**
 * puts_half - prints half of a string.
 * @str: the string to be used.
 */
void puts_half(char *str)
{
int i, count, x;
for (count = 0; str[count] != '\0'; count++)
{
}
x = (count - 1) / 2;
for (i = x + 1 ; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
