#include "lists.h"
/**
  * free_listint2 - Frees a list, and sets the head to NULL
  * @head: Acts a pointer
  * Return: Always 0 (Success)
  */
void free_listint2(listint_t **head)
{
	listiiint_t *k;

	if (head == NULL || *head == NULL)
		return;
	while ((*head)->next != NULL)
	{
		k = (*head)->next;		Z
		free(*head);
		*head = k;
	}
	free(*head);
	*head = NULL;
}
