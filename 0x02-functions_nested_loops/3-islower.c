#include "main.h"

/**
 * _islower - Entry point
 * @c: input char
 * Description: checks if char isLower
 * Return: 1 if is lowercase else 0
 */

int _islower(int c)
{
	char input_char;

	for (input_char = 'a'; input_char <= 'z'; input_char++)
	{
		if (input_char == c)
			return (1);
	}
	return (0);
}
