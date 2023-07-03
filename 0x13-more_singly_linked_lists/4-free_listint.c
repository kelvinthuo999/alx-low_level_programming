#include "lists.h"

/**
 * free_listint - frees memory that has been allocated to a list
 * @head: pointer to the start of a list
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	/* variable declaration */
	listint_t *current;

	/* check if the list is empty */
	if (head == NULL)
		return;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
	free(head);
}
