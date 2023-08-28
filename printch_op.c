#include "monty.h"
/**
 * f_printch - This opcode prints the char at the top of the stack,
 * followed by a new line
 * @head: The stack head
 * @county: number
 * Return: void
*/
void f_printch(stack_t **head, unsigned int county)
{
	stack_t *h;

	h = *head;
	if (!h)
	{
		fprintf(stderr, "L%d: can't print pch, empty stk \n", county);
		fclose(bus.file);
		free(bus.cont);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (h->n > 127 || h->n < 0)
	{
		fprintf(stderr, "L%d: can't print pch, no range\n", county);
		fclose(bus.file);
		free(bus.cont);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", h->n);
}
