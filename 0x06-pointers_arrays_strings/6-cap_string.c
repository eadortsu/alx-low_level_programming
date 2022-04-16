#include "holberton.h"
/**
 * *cap_string - capitalize first letter of each word in string.
 * @s:given string.
 */
char *cap_string(char *s)
{
    int i, j;
    
	char a[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\n', '\t', ' '};
	
	for (i = 0; s[i] != '\0'; i++)
	{
		
		if (i == 0)
		{
			if ((s[i] >= 'a' && s[i] <= 'z'))
				s[i] = s[i] - 32; 
			continue; 
		}
		if (s[i - 1] == a[j])
		{
			
			j++;
			
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32; 
				continue; 
			}
		}
		else
		{
			
			if(s[i] >= 'A' && s[i] <= 'Z')
				s[i] = s[i] + 32; 
		}
	}
	return(s);
}