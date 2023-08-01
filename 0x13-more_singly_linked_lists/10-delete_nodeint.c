#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index of a listint_t list.
 * @head: Double pointer to the head of the listint_t list.
 * @index: Index of the node to be deleted (starting at 0).
 *
 * Return: 1 if the deletion succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current, *temp;

	if (*head == NULL) /* Check if the list is empty */
		return (-1);

	if (index == 0) /* Special case: delete the first node */
	{
		temp = *head;
		*head = temp->next;
		free(temp);
		return (1);
	}

	current = *head;
	while (current != NULL && count < index - 1)
	{
		current = current->next;
		count++;
	}

	if (current == NULL || current->next == NULL) /* is index is out of range */
		return (-1);

	temp = current->next;
	current->next = temp->next;
	free(temp);

	return (1);
}
