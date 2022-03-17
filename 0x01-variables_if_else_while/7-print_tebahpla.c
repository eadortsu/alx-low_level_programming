#include <stdio.h>

/**
 * main-prints the lowercase alphabet in reverse,
 * followed by a new line,
 * only using the putchar function
 * Return:0 if successful
 * otherwise returns non-zero
*/

int main(void)
{
char rletter;
for (rletter = 'z'; rletter >= 'a'; rletter--)
{
putchar(rletter);
}
putchar('\n');

return (0);
}
