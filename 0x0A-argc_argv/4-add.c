#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that multiplies two ints.
 * @argc: counts compliation arguments.
 * @argv: an array that contains arguments.
 * Return: 0.
 */
int main(int argc, char **argv[])
{
int i, j, sum = 0;
if (argc > 1)
{
for (i = 0; i < argc; i++)
{
for (j = 0; argv[i][j]; j++)
if (argv[i][j] > '0' || argv[i][j] < '9')
{
printf("error");
return (1);
}
}
sum += atoi(argv[i]);
}
}
printf("%d\n", sum);
return (0);
}
