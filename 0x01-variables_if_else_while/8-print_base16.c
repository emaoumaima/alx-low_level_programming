#include <stdio.h>
/**
 * main - main block
 *
 * Description: Print all numbers of base 16 in lowercase.
 * You can only use `putchar`, and only 3 times.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (c = 'a'; c < 'g'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
