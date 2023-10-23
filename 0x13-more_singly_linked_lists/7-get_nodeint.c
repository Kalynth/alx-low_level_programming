#include "lists.h"
/**
  * get_nodeint_at_index - gets all the nodes
  * @index: node desired position to retrieve
  * @head: Acts as a pointer to the list
  * Return:where index is the index of the node, starting at 0
  * if the node does not exist, return NULL
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
