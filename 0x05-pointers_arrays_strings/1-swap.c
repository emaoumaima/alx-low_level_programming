#include "main.h"

/**
 * swap_int - swaps two int pointers's values.
 * @a: the first int pointer
 * @b: the second int pointer
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
