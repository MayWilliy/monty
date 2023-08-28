#include "monty.h"
/**
  *f_roll- This rotates the stack to the top
  *@head: The stack head
  *@county: number
  *Return: void
 */
void f_roll(stack_t **head,  __attribute__((unused)) unsigned int county)
{
	stack_t *tmp = *head, *cat;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	cat = (*head)->next;
	cat->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = cat;
}
