/**
 * prime_helper - helper function
 * @n: input number.
 * @i: iterator.
 * Return: square root or -1.
 */
int prime_helper(int n, int i)
{
	if (i * i > n)
		return (0);
	else if (n % i == 0)
		return (1);
	else
		return (prime_helper(n, i + 2));
}

/**
 * is_prime_number - detects if an input number is a prime number.
 * @n: input number.
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	if (n % 2 == 0)
		return (0);
	return (!prime_helper(n, 3));
}
