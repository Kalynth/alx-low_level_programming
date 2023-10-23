#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node
 * @head: Acts as a pointer
 * @index: index
 * Return: 1 if success, -1 if fail.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int j;
	listint_t *jode;
	listint_t *kode;

	jode = *head;
	if (head == NULL || *head == NULL)
		return (-1);
	for (j = 0; j < index - 1 && jode != 0; j++)
		jode = jode->next;
	if (jode == NULL)
		return (-1);
	if (index == 0)
	{
		kode = jode->next;
		free(jode);
		*head = kode;
	}
	else
	{
		if (jode->next == NULL)
			kode = jode->next;
		else
			kode = jode->next;
		free(jode->next);
		jode->next = kode;
	}
	return (1);
}
