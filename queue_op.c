#include "monty.h"
/**
 * f_queue - This prints the top
 * @head: The stack head
 * @county: number
 * Return: void
*/
void f_queue(stack_t **head, unsigned int county)
{
	(void)head;
	(void)county;
	bus.lifi = 1;
}

/**
 * addqueue - This adds a node to the tail stack
 * @n: a new_value
 * @head: the head of the stack
 * Return: void
*/
void addqueue(stack_t **head, int n)
{
	stack_t *add_node, *cat;

	cat = *head;
	add_node = malloc(sizeof(stack_t));
	if (add_node == NULL)
	{
		printf("Error\n");
	}
	add_node->n = n;
	add_node->next = NULL;
	if (cat)
	{
		while (cat->next)
			cat = cat->next;
	}
	if (!cat)
	{
		*head = add_node;
		add_node->prev = NULL;
	}
	else
	{
		cat->next = add_node;
		add_node->prev = cat;
	}
}
