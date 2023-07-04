#include "lists.h"

/**
 * pop_listint - Deletes the head node of a list
 * @head: Pointer to the starting point of the list
 * Return: Integer(data from the deleted node)
 */

int pop_listint(listint_t **head)
{
	/* variable declaration and initialization */
	listint_t *tmp = (*head);
	int data;

	/* check if the list is empty */
	if ((*head) == NULL)
		return (0);
	/* delete the head node */
	data = tmp->n;
	*head = (*head)->next;
	free(tmp);
	return (data);
}
