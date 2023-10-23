#include "lists.h"
 /**
  * Create_new_node - Creates a node
  * @n: Contains data for the nod
  * Return: The pointer to the node
  */
listint_t *create_new_node(int n)
{
	listint_t *new_node;

	new_node  = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	return (new_node);
}
/**
  * insert_nodeint_at_index - Inserts a node in an index
  * @head: Acts as a pointer
  * @idx: index
  * @n: data of the node
  * Return: The address of the node
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *temp;
	listint_t *jod;
	listint_t *cake;

	temp = *head;
	if (head == NULL)
		return (NULL);
	cake = create_new_node(n);
	if (cake == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = cake;
		return (cake);
	}

	if (idx == 0)
	{	
		cake->next = *head;
		*head = cake;
		return (cake);
	}

	for (j = 0; j < idx -1 && temp != NULL && idx != 0; j++)
		temp = temp->next;
	if (temp == NULL)
		return (NULL);
	if (idx == 0)
		cake->next = temp;
	else
	{
		jod = temp->next;
		temp->next = cake;
		cake->next = jod;
	}
	return (cake);
}
