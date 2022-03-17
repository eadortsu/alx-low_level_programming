#include <stdio.h>

/**
 * main-prints all the numbers of base 16 in lowercase,
 * followed by a new line
 * Return:0 if successful
 * otherwise returns non-zero
*/

int main(void)
{
int num;
char ch;

for (num = 48; num < 58; num++)
{
putchar(num);
}
for (ch = 'a'; ch <= 'f'; ch++)
{
putchar(ch);
}
putchar('\n');

return (0);
}
