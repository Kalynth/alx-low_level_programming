#include "lists.h"
/**
 * get_nodeint_at_index - Returns the nth node in a list
 * @index: Node desired position to retrieve
 * @head: Acts a pointer to the list
 * Return: Pointer to the node, or NULL if it does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int z;

	for (z = 0; z < index; z++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
