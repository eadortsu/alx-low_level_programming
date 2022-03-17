#include <ctype.h>

/**
 * _isalpha - checks for alphabetic character
 * Return: 1 if c is a letter, lowercase or uppercase
 * Return: 0 otherwise
*/
int _isalpha(int c)
{
if (isalpha(c))
return (1);
return (0);
}
