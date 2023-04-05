#include "lists.h"

/**
 * free_listint_safe - Frees a list safely.
 * @h: Pointer to pointer to the head of the list.
 * Return: The size of the list.
 */


size_t free_listint_safe(listint_t **h)
{
	listint_t *curr, *next;
	size_t s = 0;

	if (h == NULL || *h == NULL)
		return (0);

	curr = *h;
	*h = NULL;

	while (curr != NULL)
	{
		next = curr->next;
		free(curr);
		s++;
		if (next <= curr)
			break;

		curr = next;
	}
	return (s);
}
