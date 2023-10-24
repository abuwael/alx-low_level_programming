#include "lists.h"

/**
 * free_listint - Used to free the linked list
 *
 * @head: listint_t list to free
 *
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
