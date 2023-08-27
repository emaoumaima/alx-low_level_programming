#include "main.h"
/**
* *_strpbrk - searches a string for any of a setof bytes
* @s: string to search
* @accept: stringcontaining the bytes to look for
* Return: pointer to the byte in s that matches one of the bytes in accept
* or '\0' if no such bytes is found
*/


char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}

	return ('\0');
}
