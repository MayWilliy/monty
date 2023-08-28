#include "monty.h"
/**
* exec - This functionexecutes the opcode
* @stack: The stack head linked list
* @county: number
* @file: The poiner to The monty file
* @cont: The line content
* Return: no return
*/
int exec(char *cont, stack_t **stack, unsigned int county, FILE *file)
{
	instruction_t opst[] = {
				{"push", f_push}, {"pall", f_pall}, {"print", f_print},
				{"pop", f_pop},
				{"swap", f_swap},
				{"add", f_addition},
				{"nop", f_nop},
				{"sub", f_sub},
				{"div", f_division},
				{"mul", f_multiply},
				{"mod", f_modify},
				{"pchar", f_printch},
				{"pstr", f_pstring},
				{"rotl", f_roll},
				{"rotr", f_rotr},
				{"queue", f_queue},
				{"stack", f_stack},
				{NULL, NULL}
				};
	unsigned int j = 0;
	char *up;

	up = strtok(cont, " \n\t");
	if (up && up[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[j].opcode && up)
	{
		if (strcmp(up, opst[j].opcode) == 0)
		{	opst[j].f(stack, county);
			return (0);
		}
		j++;
	}
	if (up && opst[j].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", county, up);
		fclose(file);
		free(cont);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
