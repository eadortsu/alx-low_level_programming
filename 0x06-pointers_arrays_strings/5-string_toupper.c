#include "holberton.h"
/**
 * *string_toupper - converts lowercase to uppercase
 * @s:given string.
 * Return: s modified.
 */
char *string_toupper(char *s)
{
int i = 0;
for (; s[i] != '\0'; i++)
{
if (s[i] > 96 && s[i] < 123)
{
s[i] -= 32;
}
}
return (s);
}
