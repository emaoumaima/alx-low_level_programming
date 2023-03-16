#include <stdlib.h>
#include <limits.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: the size of the memory allocated
 * Return: if worked, the pointer to the memory allocated, exit(98) otherwise
 */

void *malloc_checked(unsigned int b)
{
	int *memory;

	memory = malloc(b);
	if (!memory)
	{
		exit(98);
	}
	return (memory);
}
