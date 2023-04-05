#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at the specified index
 * @head: pointer to the head of the linked list
 * @index: the index of the node to retrieve
 *
 * Return: pointer to the node at the specified index, or NULL if not found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current_node = head;
	unsigned int current_index = 0;

	while (current_node != NULL && current_index < index)
	{
		current_node = current_node->next;
		current_index++;
	}

	if (current_index == index && current_node != NULL)
	{
		return (current_node);
	}
	else
	{
		return (NULL);
	}
}
