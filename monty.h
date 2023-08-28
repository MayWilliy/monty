#ifndef MONTY_H
#define MONTY_H

#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: previous element of the stack (or queue)
 * @next: the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and functions
 * @opcode: opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and functions
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *cont;
	int lifi;
}  bus_t;
extern bus_t bus;

/*Math Operations*/
void f_addition(stack_t **head, unsigned int county);
void f_sub(stack_t **head, unsigned int county);
void f_division(stack_t **head, unsigned int county);
void f_multiply(stack_t **head, unsigned int county);
void f_modify(stack_t **head, unsigned int county);

/*Error Handling*/
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int county);

/*Other stack operations*/
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char  *clean_line(char *cont);
void f_push(stack_t **head, unsigned int number);
void f_pall(stack_t **head, unsigned int number);
void f_print(stack_t **head, unsigned int number);
int exec(char *cont, stack_t **head, unsigned int county, FILE *file);
void free_stack(stack_t *head);
void f_pop(stack_t **head, unsigned int county);
void f_swap(stack_t **head, unsigned int county);
void f_nop(stack_t **head, unsigned int county);
void f_printch(stack_t **head, unsigned int county);
void f_pstring(stack_t **head, unsigned int county);
void f_roll(stack_t **head, unsigned int county);
void newnode(stack_t **head, int n);
void addqueue(stack_t **head, int n);
void f_queue(stack_t **head, unsigned int county);
void f_stack(stack_t **head, unsigned int county);
#endif
