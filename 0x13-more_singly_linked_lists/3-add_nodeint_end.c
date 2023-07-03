#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of the list
 * @head: pointer to the start of the list
 * @n: integer value to be stored in the node
 * Return: Address to the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* variable declaration and initialization */
	listint_t *tmp = *head;
	listint_t *ptn = malloc(sizeof(listint_t));

	/* check if memory has been allocated */
	if (ptn == NULL)
		return (NULL);

	/* update the node with data */
	ptn->n = n;
	ptn->next = NULL;

	/* check if list is empty and update the list */
	if ((*head) == NULL)
	{
		(*head) = ptn;
	}
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = ptn;
	}
	return (ptn);
}
