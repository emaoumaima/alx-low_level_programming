#include <stdio.h>
/**
 * main - main block
 *
 * Description: Print the alphabet in lowercase using 'putchar'.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
