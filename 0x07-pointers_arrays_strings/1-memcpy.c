#include "main.h"

/**
* _memcpy - function copies n bytes from memory area src to memory area dest
* @dest: memory destination for copied bytes
* @src: memory source of copied bytes
* @n: number of bytes to copy
* Return: Pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}

return (dest);
}
