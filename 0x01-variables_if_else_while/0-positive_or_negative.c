#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - returns a random number then declares,
 * whether positive, negative or zero,
 * Return:0 if successful, non-zero otherwise,
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
/* if number is positive */
printf("%d is positive\n", n);
else if (n < 0)
/* if number is negative */
printf("%d is negative\n", n);
else
/* if number is zero */
printf("%d is zero\n", n);
return (0);
}
