#include "main.h"

/**
 * print_alphabet - Entry point
 * Description: Prints alpabets
 * Return: void
 */

void print_alphabet(void)
{
	char current_letter;

	current_letter = 'a';

	while (current_letter <= 'z')
	{
		_putchar(current_letter);
		current_letter++;
	}

	_putchar('\n');
}
