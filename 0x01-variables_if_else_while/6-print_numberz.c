#include <stdio.h>

/**
 * main-prints base10 numbers from 0-9,
 * only using the putchar function
 * Return:0 if successful
 * otherwise returns non-zero
*/

int main(void)
{
int num = 48;
while (num < 58)
{
putchar(num);
num++;
}
putchar('\n');

return (0);
}
