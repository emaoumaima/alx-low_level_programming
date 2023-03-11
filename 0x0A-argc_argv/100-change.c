#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for an amount.
 * of money.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */


int main(int argc, char *argv[])
{
	int n, ans;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("0\n");
		return (0);
	}
	ans = 0;
	ans += n / 25;
	n %= 25;
	ans += n / 10;
	n %= 10;
	ans += n / 5;
	n %= 5;
	ans += n / 2;
	n %= 2;
	ans += n;
	printf("%d\n", ans);
	return (0);
}
