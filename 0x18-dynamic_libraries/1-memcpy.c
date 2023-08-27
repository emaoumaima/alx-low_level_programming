#include "main.h"

/**
* _memcpy - copies memory area
* @dest: destination
* @src: memory ara to copy from
* @n: number of bytes to copy
*
* Return: dest that is the pointer to the memory area
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
