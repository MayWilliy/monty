#include "monty.h"
/**
  *f_rotr- This rotates the stack to the bottom
  *@head: The stack head
  *@county: number
  *Return: void
 */
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int county)
{
	stack_t *copy;

	copy = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *head;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*head)->prev = copy;
	(*head) = copy;
}
