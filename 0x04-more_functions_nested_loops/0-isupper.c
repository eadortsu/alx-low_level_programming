#include <stdio.h>
/**
 *_isupper - define if a charachter is upper case.
 *@c: the charachter to be tested.
 *Return: 1 if true or 0 if false.
 */
int _isupper(int c)
{
if ((c > 64) && (c < 91))
{
return (1);
}
else
{
return (0);
}
}
