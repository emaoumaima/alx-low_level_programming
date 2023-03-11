#include <stdio.h>

/**
  * main - Prints all the args content
  * @argc: argument count
  * @argv: arguments
  *
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
