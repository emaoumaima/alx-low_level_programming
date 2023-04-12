#include "main.h"

/**
 * get_bit - returns the value of a bit at a specific index
 * @n: the number to search
 * @index: the index of the bit
 *
 * Return: the value of the bit at the given index, or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
