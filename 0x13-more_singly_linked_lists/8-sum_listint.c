#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n) in a listint_t list.
 * @head: Pointer to the head of the listint_t list.
 *
 * Return: The sum of all the data (n) in the list, or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	/* Traverse the list and add each node's data to the sum */
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
