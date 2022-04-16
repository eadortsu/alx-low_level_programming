#include <stdio.h>
/**
 *main - Prints the sizeof char,int,long int,long long int and float
 *Return: 0 if Success
 */
int main(void)
{
char f;
int g;
long int h;
long long int i;
float j;
printf("Size of a char: %d byte(s)\n", sizeof(f));
printf("Size of an int: %d byte(s)\n", sizeof(g));
printf("Size of a long int: %d byte(s)\n", sizeof(h));
printf("Size of a long long int: %d byte(s)\n", sizeof(i));
printf("Size of a float: %d byte(s)\n", sizeof(j));
return(0);
}
