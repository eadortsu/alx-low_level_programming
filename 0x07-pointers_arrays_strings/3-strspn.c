#include "holberton.h"
/**
 * _strspn - gets lengthof a prefix substring
 * @s: string to check
 * @accept: string to check against
 *
 * Return: number of bytes of s in accept
 */
unsigned int _strspn(char *s, char *accept)
{
int i, k, counter = 0;
for (i = 0; s[i] != '\0'; i++)
if (counter != i)
break;
for (k = 0; accept[k] != '\0'; k++)
{
if (s[i] == accept[k])
counter++;
}
}
return (counter);
}
