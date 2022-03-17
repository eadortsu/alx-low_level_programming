#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints the last digit of a number.
 * return: value of the last digit
*/
int print_last_digit(int n)
{
int num;
  
if (n < 0)
num = -1 * (n % 10);
else
num = n % 10;

_putchar(48 + num);
  
return (num);
}
