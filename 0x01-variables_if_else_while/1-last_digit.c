#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the last digit of
 * the number stored in variable n
 * Return: 0 if successful
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %d is %d", n, n % 10);
if (n % 10 > 5)
printf(" and is greater than 5\n");
if (n % 10 == 0)
printf(" and is 0\n");
if (n % 10 < 6 && n % 10 != 0)
printf(" and is less than 6 and not 0\n");
return (0);
}
