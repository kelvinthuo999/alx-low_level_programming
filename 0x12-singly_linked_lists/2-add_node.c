#include "lists.h"

size_t _strlen(const char *str);/*determine length of a string*/

/**
 * add_node - adds a node at the beginning of a linked list
 * @head: pointer to the beginning of a linked list
 * @str: pointer to a string to be added
 * Return: pointer to the new list
 */

list_t *add_node(list_t **head, const char *str)
{
	/* variable declaration */
	list_t *new_head;

	/* check if str is NULL */
	if (str == NULL)
	{
		return (NULL);
	}
	/* create memory for the new head */
	new_head = malloc(sizeof(list_t));
	/* check if the memory has been allocated */
	if (new_head == NULL)
	{
		return (NULL);
	}
	new_head->str = strdup(str);
	new_head->len = _strlen(str);
	new_head->next = (*head);
	(*head) = new_head;

	return (*head);
}
size_t _strlen(const char *str)
{
	/* variable declaration and initialization */
	size_t idx = 0;

	/* while loop to determine the length */
	while (*str != '\0')
	{
		str++;
		idx++;
	}
	return (idx);
}
