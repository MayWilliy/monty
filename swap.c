#include "monty.h"
/**
 * f_swap - This swaps the top two elements of the stack.
 * @head: The stack head
 * @county: number
 * Return: value
*/
void f_swap(stack_t **head, unsigned int county)
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
		fprintf(stderr, "L%d: can't swap, stack too short\n", county);
		fclose(bus.file);
		free(bus.cont);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	cat = h->n;
	h->n = h->next->n;
	h->next->n = cat;
}
