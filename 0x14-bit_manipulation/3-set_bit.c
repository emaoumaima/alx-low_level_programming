#include "main.h"

/**
 * set_bit - sets a bit at a specific index to 1
 * @n: pointer to the number to modify
 * @index: the index of the bit to set
 *
 * Return: 1 if the operation was successful, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n |= (1UL << index);
	return (1);
}
