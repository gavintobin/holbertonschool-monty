#include "monty.h"

checker *c;

/**
 * other - function
 * @op: struct
 * @linecount: var
 * @ch: var
 * @stack: var
 * Return: void
 */

void other(unsigned int linecount, char *ch, stack_t **stack)
{

instruction_t op[] = {{"push", push}, {"pall", pall}, {"pint", pint}, {"pop", pop}, {"swap", swap}, {"add", add}, {"nop", nop}};

if (strstr("push", ch))
{
op[0].f(stack, linecount);
}
else if (strstr("pall", ch))
{
op[1].f(stack, linecount);
}
else if (strstr("pint", ch))
{
op[2].f(stack, linecount);
}
else if (strstr("pop", ch))
{
op[3].f(stack, linecount);
}
else if (strstr("swap", ch))
{
op[4].f(stack, linecount);
}
else if (strstr("add", ch))
{
op[5].f(stack, linecount);
}
else if (strstr("nop", ch))
{
op[6].f(stack, linecount);
}
else
{
fprintf(stderr, "L%d: unknown instruction %s\n", linecount, ch);
exit(1);
return;
}
}
