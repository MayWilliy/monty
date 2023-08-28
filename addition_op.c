#include "monty.h"
/**
 * f_addition - This adds the top two elements of the stack.
 * @head: The stack head
 * @county: number
 * Return: value
*/
void f_addition(stack_t **head, unsigned int county)
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
		fprintf(stderr, "L%d: can't add, stack too short\n", county);
		fclose(bus.file);
		free(bus.cont);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	cat = h->n + h->next->n;
	h->next->n = cat;
	*head = h->next;
	free(h);
}
