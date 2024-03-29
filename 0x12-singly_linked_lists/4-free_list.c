#include <stdlib.h>
#include "lists.h"

/**
 * free_list - this code frees a linked list
 * @head: list_t list to be freed
 */

void free_list(list_t *head)
{
	list_t *mp;

	while (head)
	{
	mp = head->next;
	free(head->str);
	free(head);
	head = mp;
	}
}
