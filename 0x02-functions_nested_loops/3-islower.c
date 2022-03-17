#include <ctype.h>

/**
 * _islower - checks for lowercase character
 * Return: 1 if lowercase
 * Return: 0 otherwise
*/
int _islower(int c)
{
  if (islower(c))
    return (1);
  return (0);
}
