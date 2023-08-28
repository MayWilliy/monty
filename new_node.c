#include "monty.h"
/**
 * newnode - This add new  node to the head stack
 * @head: the head of the stack
 * @n: a new_value
 * Return: void
*/
void newnode(stack_t **head, int n)
{

	stack_t *add_node, *cat;

	cat = *head;
	add_node = malloc(sizeof(stack_t));
	if (add_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (cat)
		cat->prev = add_node;
	add_node->n = n;
	add_node->next = *head;
	add_node->prev = NULL;
	*head =add_node;
}
