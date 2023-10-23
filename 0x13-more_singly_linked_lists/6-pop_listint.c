#include "lists.h"
/**
  * pop_listint - Deletes the head node of a list
  * @head: Acts as a pointer
  * Return: The head nodes data, if list empty, return 0
  */

int pop_listint(listint_t **head);
{
	int k;
	listint_t *jod;

	if (head == NULL || *head == NULL)
		return (0);
	k = (*head)->n;
	jod = *head;
	*head = (*head)->next;
	free(jod);
	return (k);
}
