#include "lists.h"

/**
  * free_listint2 - Clean the list
  * @head: The list
  * Return: void
  */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head)
	{
		current = (*head)->next;ZZ
		free(*head);
		*head = current;
	}
}
