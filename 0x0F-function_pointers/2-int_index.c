#include "function_pointers.h"
/**
 * int_index - a function that searchs for an integer
 * @array: an array of ints
 * @size: size of the array
 * @cmp: function to be used
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;
if (array && cmp && size > 0)
{
for (; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
return (-1);
}
return (-1);
}
