#include "monty.h"

/**
 * Global Var
 */

checker *c;

/**
 * main - Main Function
 * @argcount: how many args
 * @argcont: contents of arg
 * Return: int
 */

int main(int argcount, char *argcont[])
{

char *buff;
size_t size;
const char del[] = " \t\n";
int linecount = 0;
stack_t *stack = NULL;

c = malloc(sizeof(checker));
buff = malloc(sizeof(char *));

c->file = NULL;

if (argcount != 2)
{
fprintf(stderr, "USAGE: monty file\n");
exit(EXIT_FAILURE);
}
c->file = fopen(argcont[1], "r");
if(c->file == NULL)
{
fprintf(stderr, "Error: Can't open file %s\n", argcont[1]);
fclose(c->file);
free(c->file);
exit(EXIT_FAILURE);
}

while(getline(&buff, &size, c->file) != -1)
{

c->check1 = strtok(buff, del);
c->check2 = strtok(NULL, del);
linecount++;

other(linecount, c->check1, &stack);
}

free(buff);
fclose(c->file);
free(c);
freemem(&stack);
return (0);
}
