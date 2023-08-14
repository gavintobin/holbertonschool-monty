#include "monty.h"

/**
 * swap - swap two elements
 * @stack: stack
 * @i: line num
 * Return: void
 */

void swap(stack_t **stack, unsigned int i)
{
stack_t *new;

if (!(*stack) || !(*stack)->next)
{
fprintf(stderr, "L%d: can't swap, stack too short\n", i);
exit(EXIT_FAILURE);
}

new = (*stack)->next;
(*stack)->next = new->next;
(*stack)->prev = new;
new->next = (*stack);
new->prev = NULL;
(*stack) = new;
}

/**
 * add - add top two elements
 * @stack: stack
 * @i: line num
 * Return: void
 */

void add(stack_t **stack, unsigned int i)
{
stack_t *new;

if (!(*stack) || !((*stack)->next))
{
fprintf(stderr, "L%d: can't add, stack too short\n", i);
exit(EXIT_FAILURE);
}
new = (*stack);
new->next->n = (((*stack)->n) + ((*stack)->next->n));
(*stack) = new->next;
free(new);
}
