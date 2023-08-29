#include "lists.h"
/**
  * free_listint2 - Frees a list, and sets the head to NULL
  * @head: Acts a pointer
  * Return: Always 0 (Success)
  */

void free_listint2(listint_t **head)
{
	listint_t *z;

	if (head == NULL || *head == NULL)
		return;
	while ((*head)->next != NULL)
	{
		z = (*head)->next;
		free(*head);
		*head = z;
	}
	free(*head);
	*head = NULL;
}
