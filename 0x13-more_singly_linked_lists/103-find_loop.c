#include "lists.h"

/**
  * find_listint_loop - Finds a loop in a linked list
  * @head: pointer to the first node of the list
  * Return: address of the node where the loop starts, NULL otherwise
  */

listint_t *find_listint_loop(listint_t *head)
{

	listint_t *current;

	current = head;
	if (head == NULL)
		return (NULL);


	while (current)
	{
		if (current->next >= current && current->next != NULL)
			return (current->next);

		current = current->next;
	}
	return (NULL);
}
