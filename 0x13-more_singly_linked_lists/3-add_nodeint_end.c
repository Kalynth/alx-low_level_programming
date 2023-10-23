#include "lists.h"
/**
  * add_nodeint_end - Adds a node to the end of the list
  * @n: Integer
  * @head: Acts as a pointer
  * Return: ddress of the new element, or NULL if it failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temporary;
	listint_t *new;

	void(temporary);

	fresh = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	temporary = *head;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (temporary->next != NULL)
		{
		temporary = temporary->next;
		}
		temporary->next = new;
	}
	return (*head);
}
