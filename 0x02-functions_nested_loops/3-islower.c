#include "holberton.h"
/**
 *_islower - a function that checks for lowercase character
 *
 *@c: character to be tested
 *Return: (0,1)
 */
int _islower(int c)
{
if (c >= 97 && c < 123)
return (1);
return (0);
}
