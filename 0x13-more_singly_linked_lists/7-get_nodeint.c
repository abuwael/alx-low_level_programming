#include "lists.h"

/**
 * get_nodeint_at_index - To return a node in a
 * certain index in an linked list.
 *
 * @head: The first node in the linked list
 * @index: The index of node to be returned
 *
 * Return: Pointes to the node/or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
		head = head->next;

	return (head);
}
