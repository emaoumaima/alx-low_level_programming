#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print in binary form
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int len = 0;

	while (mask <= n)
	{
		len++;
		mask <<= 1;
	}
	mask >>= 1;

	while (mask)
	{
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');

		mask >>= 1;
	}

	if (len == 0)
		_putchar('0');
}
