#include "lists.h"
/**
  * add_nodeint_end - Adds a node to the end of the list
  * @n: Integer
  * @head: Acts a pointer to the list
  * Return: ddress of the new element, or NULL if it failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *fresh;
	listint_t *temporary;

	fresh = malloc(sizeof(listint_t));
	if (fresh == NULL)
		return (NULL);

	fresh->n = n;
	fresh->next = NULL;
	temporary = *head;
	if (*head == NULL)
	{
		*head = fresh;
	}
	else
	{
		while (temporary->next != NULL)
		{
		temporary = temporary->next;
		}
		temporary->next = fresh;
	}
	return (*head);
}
