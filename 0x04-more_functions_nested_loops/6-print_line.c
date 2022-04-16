#include "holberton.h"
/**
 *print_line - print _ *n.
 *
 *@n: number of times printing n.
 */
void print_line(int n)
{
int i;
i = 0;
while (n > 0 && i < n)
{
_putchar(95);
i++;
}
_putchar('\n');
}
