#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list.
 * @head: Double pointer to the head of the listint_t list.
 *
 * Return: The data (n) of the deleted head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	int data = 0;

	/* If the list is empty, return 0 */
	if (*head == NULL)
	{
		return (0);
	}

	/* Store the data of the head node to be returned */
	data = (*head)->n;

	/* Move the head pointer to the next node (delete the current head) */
	*head = (*head)->next;

	/* Return the data of the deleted head node */
	return (data);
}
