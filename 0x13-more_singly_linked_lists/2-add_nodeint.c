#include "lists.h"

/**
 * add_nodeint - a function to add a node at the beginning of a list
 * @head: pointer to the start of the list
 * @n: integer to be stored at the node
 * Return: Address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	/* variable declaration and initialization */
	listint_t *tmp = NULL;

	/* create memory for the new node */
	tmp = malloc(sizeof(listint_t));
	/* check if the memory has been created */
	if (tmp == NULL)
		return (NULL);
	/* assign values to the new node */
	tmp->n = n;
	tmp->next = *head;

	*head = tmp;
	if (*head != NULL)
		return (*head);
	else
		return (NULL);
}
