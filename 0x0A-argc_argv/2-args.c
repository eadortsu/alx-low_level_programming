#include<stdio.h>
#include<stdlib.h>
/**
 * main - function that prints all arguments
 * @argc: counts the arguments passed into the program
 * @argv: value of arguments in an array
 * Return: always0
 */
int main(int argc, char *argv[])
{
int i, sum = 0;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
sum += atoi(argv[i]);
}
return (0);
}
