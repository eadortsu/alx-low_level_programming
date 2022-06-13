#include "holberton.h"
/**
 * *_strcpy - copy the string in a new line.
 * @src:source pointer
 * @dest:dest pointer
 * Return: pointer of dest.
 */
char *_strcpy(char *dest, char *src)
{
int i, count;
for (count = 0; src[count] != '\0'; count++)
{
}
for (i = 0; i <= count; i++)
{
dest[i] = src[i];
}
return (dest);
}