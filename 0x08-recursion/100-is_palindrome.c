/**
 * _strlen - returns the length of a string.
 * @s: string
 * Return: the length of a string.
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen(s + 1));
}
/**
 * is_pal - detects if a string is a palindrome.
 * @s: string.
 * @start: starting point
 * @end: ending point
 * Return: 1 if s is a palindrome, 0 if not.
 */

int is_pal(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (is_pal(s, start + 1, end - 1));
}
/**
 * is_palindrome - detects if a string is a palindrome.
 * @s: string.
 * Return: 1 if s is a palindrome, 0 if not.
 */

int is_palindrome(char *s)
{
	return (is_pal(s, 0, _strlen(s) - 1));
}
