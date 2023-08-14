#include "monty.h"

checker *c;

/**
 * freemem - free mem
 * @stack: stack
 * Return: void
 */

void freemem(stack_t **stack)
{

stack_t *new;

if (*stack)
{
while (*stack)
{
new = (*stack)->next;
free(*stack);
(*stack) = new;
}
}
}
