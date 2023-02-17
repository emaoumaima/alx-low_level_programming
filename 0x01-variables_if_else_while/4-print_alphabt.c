#include <stdio.h>
/**
 * main - main block
 *
 * Description: Print all letters except the letter 'q' and 'e'using 'putchar'.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
			putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
