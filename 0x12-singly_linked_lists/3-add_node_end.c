#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - this code adds new node at the end of a linked list
 * @head: double pointer to list_t list
 * @str: string to put in new node
 * Return: address of new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ne;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
	len++;

	ne = malloc(sizeof(list_t));
	if (!ne)
	return (NULL);

	ne->str = strdup(str);
	ne->len = len;
	ne->next = NULL;

	if (*head == NULL)
	{
	*head = ne;
	return (ne);
	}

	while (temp->next)
	temp = temp->next;

	temp->next = ne;
	return (ne);
}
