#include "main.h"

/**
* _strspn - gets the length of a prefix substring
* @s: string to evalute
* @accept: string containing the list of charchters to match in s
*
* Return: the number of bytes in the initial segment
* of a which consist only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, j, match;
	unsigned int len = 0;

	for (i = 0; s[i]; i++)
	{
		match = 0;
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				match = 1;
				break;
			}
		}
		if (!match)
			return (len);
		len++;
	}
	return (len);
}
