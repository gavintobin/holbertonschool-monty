#ifndef montyh
#define montyh
#undef montyh

/**
 * Includes
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * struct check
 * @check1: var
 * @check2: var
 *
 * Description: token struct
 */
typedef struct checker
{
	char *check1;
	char *check2;
	FILE *file;
} checker;

extern checker *c;

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
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
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * Prototypes
 */

int main(int argcount, char* argcont[]);
void push(stack_t **stack, unsigned int i);
void pall(stack_t **stack, unsigned int i);
void pint(stack_t **stack, unsigned int i);
void pop(stack_t **stack, unsigned int i);
void swap(stack_t **stack, unsigned int i);
void add(stack_t **stack, unsigned int i);
void nop(stack_t **stack, unsigned int i);
void freemem(stack_t **stack);
void other(unsigned int linecount, char *ch, stack_t **stack);

#endif
