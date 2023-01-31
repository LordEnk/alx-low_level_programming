#include "lists.h"

/**
  * print_listint_safe - Print the linked list
  * @head: pointer to the head of the linked list
  * Return: Number of nodes.
  */

size_t print_listint_safe(const listint_t *head)
{
	int i = 0, flag = 0;
	void *addr_prev, *addr_actual;

	addr_prev = (void *)head;
	if (head == NULL)
		exit(98);

	while (head != NULL)
	{
		addr_actual = (void *)head;
		if (addr_actual >= addr_prev && flag == 1)
		{
			printf("-> [%p] %d\n", addr_actual, head->n);
			return (i);
		}

		printf("[%p] %d\n", addr_actual, head->n);
		head = head->next;
		addr_prev = addr_actual;
		flag = 1;
		i++;
	}
	return (i);
}
