#include "monty.h"

/**
* pop - a function that removes elements in a stack
* @stack: pointer to the top of the stack
* @line_number: number where the instruction appears.
*
*/

void pop(stack_t **stack, unsigned int line_number)
{
if (*stack == NULL)
{
fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
exit(EXIT_FAILURE);
}

stack_t *temp = *stack;
*stack = (*stack)->next;
free(temp);
}
