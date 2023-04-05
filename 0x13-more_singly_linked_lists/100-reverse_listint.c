#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to a pointer to the head of the list
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *current = NULL, *next = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);

	current = *head;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	*head = prev;

	return (*head);
}
