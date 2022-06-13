#include "holberton.h"
#include <stdio.h>
/**
 * print_array- displays an array of integers.
 * @n:the number of elemnts in the array
 * @a: the string to display.
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i < n - 1)
{
printf(", ");
}
}
printf("\n");
}
