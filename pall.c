#include "monty.h"
/**
 * f_pall - prints all the values on the stack
 * @head: The stack head
 * @counter: The number used
 * Return: returns values
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
