#include <stdio.h>
#include <stdlib.h>
/**
* main - function to print program name
*  @argc: number of command line arguments
*  @argv: counts elements of compilation
*  Return: 0
*/
int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", argv[0]);
return (0);
}