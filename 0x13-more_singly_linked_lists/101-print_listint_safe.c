#include "lists.h"

/**
 * print_listint_safe - Prints a linked list, avoiding loops
 * @head: A pointer to the head of the linked list.
 * Return: The number of nodes in the linked list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head, *temp;

	while (current != NULL)
	{
		count++;
		printf("[%p] %d\n", (void *)current, current->n);

		if (current > current->next)
			current = current->next;
		else
		{
			printf("-> [%p] %d\n", (void *)current->next, current->next->n);
			exit(98);
		}

		temp = current;
	}

	return (count);
}
