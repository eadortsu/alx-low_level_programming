#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimun to make change
 * @argc: array lengh
 * @argv: array
 * Return: 0
 */
int main(int argc, char **argv)
{
int cent, i = 0, coins = 0;
int value[] = {25, 10, 5, 2, 1};
if (argc != 2)
{
printf("Error\n");
return (1);
}
cent = atoi(argv[1]);
if (cent < 1)
{
printf("0\n");
return (0);
}
while (i < 5 && cent)
{
coins += cent / value[i];
cent %= value[i];
i++;
}
printf("%d\n", coins);
return (0);
}
