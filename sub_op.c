#include "monty.h"
/**
  *f_sub- substracts the top element from the second
  *@head: The stack head
  *@county: number
  *Return: void
 */
void f_sub(stack_t **head, unsigned int county)
{
	stack_t *cat;
	int sus, nodes;

	cat = *head;
	for (nodes = 0; cat != NULL; nodes++)
		cat = cat->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", county);
		fclose(bus.file);
		free(bus.cont);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	cat = *head;
	sus = cat->next->n - cat->n;
	cat->next->n = sus;
	*head = cat->next;
	free(cat);
}
