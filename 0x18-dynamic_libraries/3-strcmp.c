#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string compare
 * @s2: seconde string compare
 *
 * Return: lessthan 0 if s1 is greater than s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
