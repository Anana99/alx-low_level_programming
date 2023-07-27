#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Adds a new node at the end of a list
 *@head: pointer to the head of the list
 *@str: string to be added to the list
 *
 *Return: NULL in case of failure
 *or address or the element
*/

list_t *add_node_end(list_t **head, const char *str)
{
		list_t *new;
		list_t *temp = *head;
		unsigned int len = 0;

		while (str[len])
			len++;

		new = malloc(sizeof(list_t));
		if (!new)
			return (NULL);

		new->str = strdup(str);
		new->len = len;
		new->next = NULL;

		if (*head == NULL)
		{
			*head = new;
				return (new);
		}

		while (temp->next)
			temp = temp->next;

		temp->next = new;

		return (new);
}
