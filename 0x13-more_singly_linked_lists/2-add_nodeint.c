#include "lists.h"
#include <stdlib.h>

/**
  * add_nodeint - Add a new node in the beginning
  * @head: Linked list
  * @n: The node data toadd
  * Return: Address of the new element
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	if (head == NULL)
		return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
