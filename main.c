#include "monty.h"
bus_t bus = {NULL, NULL, NULL, 0};
/**
* main - The main function for the monty code interpreter
* @argc: The number of arguments
* @argv: The monty file location
* Return: This returns 0 on success
*/
int main(int argc, char *argv[])
{
	char *cont;
	FILE *file;
	size_t size = 0;
	ssize_t read_line = 1;
	stack_t *stack = NULL;
	unsigned int county = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	bus.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (read_line > 0)
	{
		cont = NULL;
		read_line = getline(&cont, &size, file);
		bus.cont = cont;
		county++;
		if (read_line > 0)
		{
			exec(cont, &stack, county, file);
		}
		free(cont);
	}
	free_stack(stack);
	fclose(file);
return (0);
}
