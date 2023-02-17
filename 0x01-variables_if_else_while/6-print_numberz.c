#include <stdio.h>
/**
 * main - main block
 *
 * Description: Print all numbers of base 10, starting from 0.
 * not using any variable of type char.
 * not using `putchar` to print to console.
 * You can only use `putchar` twice.
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');

	return (0);
}
