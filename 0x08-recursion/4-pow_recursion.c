#include "main.h"

/**
* _pow_recursion - returns the exponent of a number
* @x: integer number
* @y: integer number (exponent)
* Return: value of x raised to the power of y
*/

int _pow_recursion(int x, int y)
{
int num = x;

if (y < 0)
return (-1);
else if (y == 0)
return (1);

num *= _pow_recursion(x, y - 1);
return (num);
}
