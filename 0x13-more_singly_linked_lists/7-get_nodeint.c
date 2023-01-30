#include "lists.h"

/**
  * get_nodeint_at_index - returns the nth node of the list
  * @head: Head of the linked list
  * @index: nth value of the node to return
  * Return: The node in that index
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	current = head;

	for (i = 0; i != index && current != NULL; i++)
	{
		current = current->next;
	}

	if (current)
		return (current);
	else
		return (NULL);
}
