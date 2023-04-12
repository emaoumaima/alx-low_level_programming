#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Binary to be converted to an int
 * @e: Make char pointing to an int
 * Return: Int or 0
 */

unsigned int binary_to_uint(const char *e)
{
	int z;
	unsigned int w = 0;
	unsigned int hen = 0;
	unsigned int low = 0;

	if (!e)
		return (0);

	/* Length of string */
	for (z = 0; e[z] != '\0'; z++)
	{
		hen++;
	}

	/* Reverse the string input but increment the power */
	for (z = hen - 1; z >= 0; z--, low++)
	{
		if (e[z] != '0' && e[z] != '1')
			return (0);
		/* Last el x 2 ^ low and so on */
		w += (e[z] - '0') << low;
	}

	return (w);
}
