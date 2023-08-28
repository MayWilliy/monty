#include "monty.h"
/**
 * f_modify - The opcode computes the rest of the division of the second
 * top element of the stack by the top element of the stack
 * @head: The stack head
 * @county: number
 * Return: void
*/
void f_modify(stack_t **head, unsigned int county)
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
		fprintf(stderr, "L%d: can't return mod, the stack is too short\n", county);
		fclose(bus.file);
		free(bus.cont);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: the division by zero is\n", county);
		fclose(bus.file);
		free(bus.cont);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	cat = h->next->n % h->n;
	h->next->n = cat;
	*head = h->next;
	free(h);
}
