#include "main.h"

/**
 * _isupper - functionc parametr
 *@c :parameter
 * Return: Always 0.
 */

int _isupper(int c)
{
	if (c >= 'A' &&  c <= 'Z')
		return (1);
		else
			return (0);
}
