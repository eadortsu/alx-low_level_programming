#include "function_pointers.h"
/**
 * array_iterator - prints ints and hex
 * @array:array of ints
 * @size: size of array
 * @action: a pointer to function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array != NULL && action != NULL)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
