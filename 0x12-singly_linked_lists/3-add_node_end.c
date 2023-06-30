#include "lists.h"
#include <stdlib.h>

/**
 * _strlen - calculates the length of a string
 * @str: input string
 * Return: length of the string
 */
unsigned int _strlen(const char *str)
{
	/* variable declaration and initialization */
	unsigned int idx = 0;

	/* while loop to traverse the string */
	while (*str != '\0')
	{
		str++;
		len++;
	}
	return (idx);
}

/**
 * add_node_end - adds node at the end of a linked list
 * @head: double pointer to the head node
 * @str: input string
 * Return: address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	/* variable declaration and initialization */
	list_t *new, *last;
	char *dup;
	unsigned int len;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}

	len = _strlen(str);
	new->str = dup;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
