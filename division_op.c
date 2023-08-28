#include "monty.h"
/**
 * f_division - This divides the top two elements of the stack.
 * @head: The stack head
 * @county: number
 * Return: void
*/
void f_division(stack_t **head, unsigned int county)
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
		fprintf(stderr, "L%d: can't div, stack too short\n", county);
		fclose(bus.file);
		free(bus.cont);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", county);
		fclose(bus.file);
		free(bus.cont);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	cat = h->next->n / h->n;
	h->next->n = cat;
	*head = h->next;
	free(h);
}
