#include "main.h"

/**
* rev_string - reverses a string
* @s: string to be reversed
* Return: void
*/
void rev_string(char *s)
{
int length = 0, i, j;
char *str, temp;

while (length >= 0)
{
if (s[length] == '\0')
break;
length++;
}
str = s;

for (i = 0; i < (length - 1); i++)
{
for (j = i + 1; j > 0; j--)
{
temp = *(str + j);
*(str + j) = *(str + (j - 1));
*(str + (j - 1)) = temp;
}
}
}
