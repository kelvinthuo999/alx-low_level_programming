#include "lists.h"

/**
 * free_listint2 - Frees memory allocated to a list
 * @head: Pointer to the starting point of a list
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	/* variable declaration and initialization */
	listint_t *tmp;

	/* check if the list is empty */
	if (head == NULL)
		return;
	/* while loop to traverse the list */
	while ((*head) != NULL)
	{
		tmp = (*head);
		*head = (*head)->next;
		free(tmp);
	}
	free(*head);
	head = NULL;
}
