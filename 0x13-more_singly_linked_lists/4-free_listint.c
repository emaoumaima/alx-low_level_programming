#include "lists.h"

/**
 * free_listint - Frees a list of type listint_t
 * @head: pointer to the head of the list
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *current_node;

	while (head != NULL)
	{
		current_node = head;
		head = head->next;
		free(current_node);
	}
}
