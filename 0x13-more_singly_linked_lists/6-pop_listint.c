#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list.
 * @head: Double pointer to the head of the listint_t list.
 *
 * Return: The data (n) of the deleted head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
		listint_t *temp;
		int num;

		if (!head || !*head)
			return (0);

		num = (*head)->n;
		temp = (*head)->next;
		free(*head);
		*head = temp;

		return (num);
}
