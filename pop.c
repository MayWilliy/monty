#include "monty.h"
/**
 * f_pop - This removes the top elemet of the stack
 * @head: The stack head
 * @county: number
 * Return: value
*/
void f_pop(stack_t **head, unsigned int county)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", county);
		fclose(bus.file);
		free(bus.cont);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
