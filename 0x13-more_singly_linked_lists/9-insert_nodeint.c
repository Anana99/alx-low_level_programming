#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node a
 * a given position in a listint_t list.
 * @head: Double pointer to the head of the listint_t list.
 * @idx: Index where the new node should be added (starting at 0).
 * @n: Data (n) to be stored in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *new_node, *current = *head;

	/* If the index is 0 or the list is empty, insert at the beginning */
	if (idx == 0 || *head == NULL)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);

		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	/* Traverse the list until the desired index is reached */
	while (current != NULL)
	{
		if (count == idx - 1)
		{
			new_node = malloc(sizeof(listint_t));
			if (new_node == NULL)
				return (NULL);

			new_node->n = n;
			new_node->next = current->next;
			current->next = new_node;
			return (new_node);
		}
		current = current->next;
		count++;
	}

	return (NULL);
}
