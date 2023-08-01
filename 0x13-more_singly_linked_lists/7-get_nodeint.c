#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t list.
 * @head: Pointer to the head of the listint_t list.
 * @index: Index of the node to retrieve (starting at 0).
 *
 * Return: Pointer to the nth node, or NULL if the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = head;

	/* Traverse the list until the desired index is reached */
	while (current != NULL)
	{
		if (count == index)
		{
			/* Return the node at the specified index */
			return (current);
		}

		/* Move to the next node and increment the count */
		current = current->next;
		count++;
	}

	/* If the index is out of range, return NULL */
	return (NULL);
}
