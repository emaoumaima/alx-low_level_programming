#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: The address of the node where the loop starts, or NULL if no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise = head, *rabbit = head;

	while (tortoise != NULL && rabbit != NULL && rabbit->next != NULL)
	{
		tortoise = tortoise->next;
		rabbit = rabbit->next->next;

		if (tortoise == rabbit)
		{
			/*This is where the rabbit was found sleeping*/
			tortoise = head;

			while (tortoise != rabbit)
			{
				tortoise = tortoise->next;
				rabbit = rabbit->next;
			}
			/*And the winner iiiis */
			return (tortoise);
		}
	}
	return (NULL);
}
