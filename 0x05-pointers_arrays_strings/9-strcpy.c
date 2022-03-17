#include "main.h"

/**
* *_strcpy - copies the string pointed to by src,
* including the terminating null byte (\0), to the buffer pointed to by dest.
* @dest: character pointer variable
* @src: character pointer variable
* Return: the value of the pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
int count = 0;

while (*(src + count))
{
*(dest + count) = *(src + count);
count++;
}
*(dest + count) = '\0';
return (dest);
}
