#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - The program generates a new random number each time it is executed,
 * while also keeping the original structure and intent of the sentence.
 * assigns a random number to int n everytime.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
