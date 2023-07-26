#include "monty.h"

/**
 * check_digit - checks that a string only contains digits
 * @arg: string to check
 *
 * Return: 0 if only digits, else 1
 */
static int check_digit(char *arg)
{
int i;

for (i = 0; arg[i]; i++)
{
if (arg[i] == '-' && i == 0)
continue;
if (isdigit(arg[i]) == 0)
return (1);
}
return (0);
}

/**
 * push - push an integer onto the stack
 * @stack: double pointer to the beginning of the stack
 * @line_number: script line number
 *
 * Return: void
 */
void push(stack_t **stack, unsigned int line_number)
{
char *arg_str;
int n;

arg_str = strtok(NULL, "\n\t\r ");
if (arg_str == NULL || check_digit(arg_str))
{
fprintf(stderr, "L%u: usage: push integer\n", line_number);
exit(EXIT_FAILURE);
}
n = atoi(arg_str);
if (!addNode(stack, n))
{
fprintf(stderr, "Error: malloc failed\n");
exit(EXIT_FAILURE);
}
dlist.stack_len++;
}
