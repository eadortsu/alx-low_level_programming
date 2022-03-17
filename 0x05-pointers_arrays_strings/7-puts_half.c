#include "main.h"

/**
* puts_half - prints half of a string
* followed by a new line
* @str: a string pointer
* Return: null
*/

void puts_half(char *str)
{
int count, len = 0;

while (*(str + len))
len++;
count = len / 2;
if (len % 2)
count += 1;
while (count < len)
{
_putchar(*(str + count));
count++;
}
_putchar('\n');
}
