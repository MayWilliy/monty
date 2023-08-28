#include "monty.h"
/**
* free_stack - This frees a doubly linked list
* @head: The head of the stack
*/
void free_stack(stack_t *head)
{
	stack_t *cat;

	cat = head;
	while (head)
	{
		cat = head->next;
		free(head);
		head = cat;
	}
}
