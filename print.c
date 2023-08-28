#include "monty.h"
/**
 * f_print - This prints the value at the top of the stack
 * @head: The stack head
 * @county: number
 * Return: value
*/
void f_print(stack_t **head, unsigned int county)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't print, stack empty\n", county);
		fclose(bus.file);
		free(bus.cont);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
