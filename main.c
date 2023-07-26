#include "monty.h"

/**
 * main - Entry point of monty interpreter
 * @argc: argument count
 * @argv: pointer to the argument strings
 *
 * Return: EXIT_SUCCESS on success or EXIT_FAILURE on failure
 */
int main(int argc, char *argv[])
{
stack_t *stack = NULL;
unsigned int line_number = 0;
FILE *file = NULL;
char *lineptr = NULL, *op = NULL;
size_t n = 0;

dlist.queue = 0;
dlist.stack_len = 0;
if (argc != 2)
{
fprintf(stderr, "USAGE: monty file\n");
exit(EXIT_FAILURE);
}
file = fopen(argv[1], "r");
if (file == NULL)
{
fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
exit(EXIT_FAILURE);
}
on_exit(freeLineptr, &lineptr);
on_exit(freeStack, &stack);
on_exit(closeFile, file);
while (getline(&lineptr, &n, file) != -1)
{
line_number++;
op = strtok(lineptr, "\n\t\r ");
if (op != NULL && op[0] != '#')
{
opCode(op, &stack, line_number);
}
}
exit(EXIT_SUCCESS);
}
