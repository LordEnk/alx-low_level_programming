#include "lists.h"

/**
  *reverse_listint  - reverses a linked list
  * @head: pointer to the head of the linked list
  * Return: First node of the list reversed.
  */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *tmp;
	listint_t *prev = NULL;

	current = *head;
	while (current != NULL)
	{
		tmp = current->next;
		current->next = prev;
		prev = current;
		current = tmp;
	}
	*head = prev;
	return (*head);
}
