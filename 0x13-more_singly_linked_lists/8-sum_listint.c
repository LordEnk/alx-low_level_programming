#include "lists.h"

/**
  * sum_listint - Sum of the data in the nodes.
  * @head: Linked list.
  * Return: The sum of the data in the nodes.
  */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current;

	current = head;
	while (current != NULL)
	{
		sum += current->next;
		current = current->next;
	}
	return (sum);
}
