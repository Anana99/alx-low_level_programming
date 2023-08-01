#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list.
 * @head: Double pointer to the head of the listint_t list.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}
