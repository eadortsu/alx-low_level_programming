#include "main.h"
#include <stdio.h>

/**
 * main - prints _putchar, followed by a new line.
 * Return: 0 if succesful, otherwise non-zero
*/
int main(void)
{
char word[] = "_putchar";
int length = 0;
int n;

/* Calculate length of the array ( Number of elements) */
length  = sizeof(word) / sizeof(char);

for (n = 0; n < length; n++)
{
_putchar(word[n]);
}
_putchar('\n');

return (0);
}
