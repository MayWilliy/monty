#include "monty.h"
/**
 * f_multiply - This multiplies the top two elements of the stack.
 * @head: The stack head
 * @county: number
 * Return: void
*/
void f_multiply(stack_t **head, unsigned int county)
{
	stack_t *h;
	int length = 0, cat;

	h = *head;
	while (h)
	{
		h = h->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", county);
		fclose(bus.file);
		free(bus.cont);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	cat = h->next->n * h->n;
	h->next->n = cat;
	*head = h->next;
	free(h);
}
