#include "main.h"

/**
* _strchr - locates a charchter in a string
* @s: string to search
* @c: char to find
*
* Return: a pointer to the first occurence of the charchter
* c int the string s, or NULL if the charchter is not found
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
		if (c == '\0')
		{
			return (s);
		}
		return ('\0');
}
