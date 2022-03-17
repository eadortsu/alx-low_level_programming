#include "main.h"
#include <stdio.h>

/**
* print_alphabet_x10 -  prints 10 times the alphabet,
* in lowercase, 
* followed by a new line.
*/
void print_alphabet_x10(void)
{
int num = 0;
char letter;

while (num < 10)
{
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');

num++;
}
}
