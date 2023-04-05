#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list and returns its value
 * @head: pointer to pointer to the first node of the list
 *
 * Return: the value of the deleted node, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;
	n = temp->n;
	free(temp);

	return (n);
}
