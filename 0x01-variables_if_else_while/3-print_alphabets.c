#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * then prints it in UPPERCASE
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
char lower;
char upper;

for (lower = 'a'; lower <= 'z'; lower++)
{
putchar(lower);
}
for (upper = 'A'; upper <= 'Z'; upper++)
{
putchar(upper);
}
putchar('\n');

return (0);

}
