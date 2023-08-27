#include "main.h"

/**
* _memset - fills memory with a constant byte
* @s: memory area to be filled
* @b: char for copying
* @n: number of times to copy b
*
* Return: s that is the pointer to the memory area
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
