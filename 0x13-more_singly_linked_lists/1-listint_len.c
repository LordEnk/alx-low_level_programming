#include "lists.h"

/**
  * listint_len - Print the lenght of the linked list
  * @h: Linked list
  * Return: Lenght of the linked list
  */

size_t listint_len(const listint_t *h)
{
	unsigned int i;

	for (i = 0; h != NULL; h = h->next)
	{
		i++;
	}
	return (i);
}
