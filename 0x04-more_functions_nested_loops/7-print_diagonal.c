#include "holberton.h"
/**
 *print_diagonal - prints "\" n times.
 *@n: number of "\" must be printed.
 *
 */
void print_diagonal(int n)
{
int j, i;
if (n < 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar(92);
_putchar('\n');
}
}
}
