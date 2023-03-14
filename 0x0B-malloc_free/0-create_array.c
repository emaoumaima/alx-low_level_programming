#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes
 *                it with a specific char.
 * @size: array size
 * @c: char to initialize array with
 *
 * Return: arr
*/

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arr = malloc(size * sizeof(c));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
