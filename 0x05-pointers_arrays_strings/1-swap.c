#include "holberton.h"
/**
 * swap_int - function that swaps the values of two integers
 * @a:first int.
 * @b:second int.
 */
void swap_int(int *a, int *b)
{
int s;
s = 0;
s = *a;
*a = *b;
*b = s;
}
