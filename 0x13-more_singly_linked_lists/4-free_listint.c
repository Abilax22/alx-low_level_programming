#include "lists.h"

/**
 * free_listint - this code frees a linked list
 * @head: listint_t list to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *ab;

	while (head)
	{
	ab = head->next;
	free(head);
	head = ab;
	}
}
