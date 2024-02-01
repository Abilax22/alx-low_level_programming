#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - this code adds new node at the beginning of a linked list
 * @head: double pointer to list_t list
 * @str: new string to add in the node
 * Return: address of the new element, or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ne;
	unsigned int len = 0;

	while (str[len])
		len++;

	ne = malloc(sizeof(list_t));

	if (!ne)
	return (NULL);

	ne->str = strdup(str);
	ne->len = len;
	ne->next = (*head);
	(*head) = ne;

	return (*head);
}
