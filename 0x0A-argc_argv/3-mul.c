#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that multiplies two ints.
 * @argc: counts compliation arguments.
 * @argv: an array that contains arguments.
 * Return: 0 if no error else 1
 */
int main(int argc, char *argv[])
{
int a, b, c;
if (argc != 3)
{
printf("Error");
return (1);
}
a = atoi(argv[1]);
b = atoi(argv[2]);
c = a  *b;
printf("%d\n", c);
return (0);
}
