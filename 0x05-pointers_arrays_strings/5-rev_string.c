#include "holberton.h"
/**
 * rev_string - prints a string in rev.
 * @s:the sting to be rev.
 */
void rev_string(char *s)
{
int i, j;
int count;
char v1, v2;

for (count = 0; s[count] != '\0'; count++)
{
}
j = count - 1;
i = 0;
while (j > i)
{
v1 = s[i];
v2 = s[j];
s[i] = v2;
s [j] = v1;
j--;
i++;
}
}
