#include "monty.h"
/**
 * f_pstring - This prints the string starting at the top of the stack,
 * followed by a new
 * @head: The stack head
 * @county: number
 * Return: void
*/
void f_pstring(stack_t **head, unsigned int county)
{
	stack_t *h;
	(void)county;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
