#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
  * main - Prints the sum of args positive numbers
  * @argc: argument count
  * @argv: arguments
  *
  * Return: 0
  */

int main(int argc, char *argv[])
{

	int i, j, sum;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
