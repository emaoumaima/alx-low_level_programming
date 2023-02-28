#include "main.h"

/**
 * print_rev - prints a given string in reverse
 * @str: the string
 */

void print_rev(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		_putchar(str[i]);
		i--;
	}
	_putchar('\n');
}
