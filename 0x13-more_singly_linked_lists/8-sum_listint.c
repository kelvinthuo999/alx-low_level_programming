#include "lists.h"

/**
 * sum_listint - Calculates the sum of the data in a linked list
 * @head: Pointer to the starting point of a linked list
 * Return: Sum of the elements in the list
 */

int sum_listint(listint_t *head)
{
	/* variable declaration and initialization */
	listint_t *tmp = head;
	int sum = 0;

	/* while loop to traverse the list */
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
