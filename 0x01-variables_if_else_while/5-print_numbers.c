#include <stdio.h>

/**
 * main - prints base10 numbers from 0-9,
 * Return:0 if successful,
 * otherwise returns non-zero
*/

int main(void)
{
int num = 0;
while (num < 10)
{
printf("%d", num);
num++;
}
printf("\n");

return (0);
}
