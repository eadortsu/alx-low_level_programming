#include "main.h"

/**
* _strlen_recursion - calculates length of a string
* @s: character to be counted
* Return: length of the string
*/

int _strlen_recursion(char *s)
{
int length = 0;

if (*s)
{
length++;
length = length + _strlen_recursion(s + 1);
}
return (length);
}
