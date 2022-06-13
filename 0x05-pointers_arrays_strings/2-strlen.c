#include "holberton.h"
/**
 * _strlen - calculates the lengh of a string.
 * @s: the string to be dispayed
 * Return: the lengh of string.
 */
int _strlen(char *s)
{
int i;
int count = 0;

for (i = 0; s[i] != '\0'; i++)
{
count++;
}
return (count);
}
