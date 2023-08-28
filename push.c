#include <pthread.h>
#include "monty.h"
/**
 * f_push - This pushes or adds a node to the stack
 * @head: The stack head
 * @county: line number
 * Return: no return
*/
void f_push(stack_t **head, unsigned int county)
{
	int n, j = 0, bag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			j++;
		for (; bus.arg[j] != '\0'; j++)
		{
			if (bus.arg[j] > 57 || bus.arg[j] < 48)
				bag = 1; }
		if (bag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", county);
			fclose(bus.file);
			free(bus.cont);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", county);
		fclose(bus.file);
		free(bus.cont);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	n = atoi(bus.arg);
	if (bus.lifi == 0)
		newnode(head, n);
	else
		addqueue(head, n);
}
