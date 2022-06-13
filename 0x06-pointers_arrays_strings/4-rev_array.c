#include "holberton.h"
/**
 * reverse_array - reverse a string.
 * @a:the array
 * @n:the lengh of the array
 */
void reverse_array(int *a, int n)
{
int i, j, count;
j = n - 1;
for (i = 0; i > n / 2; i++)
{
count = a[i];
a[i] = a[j];
a[j] = count;
j--;
}
}
