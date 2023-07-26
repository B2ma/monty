#include "monty.h"

/**
* add - adds element to a stack
* @stack: pointer to start of the stack
* @line_number: number where the instruction appears.
*/

void add(stack_t **stack, unsigned int line_number)
{
int j = 0;

if (dlist.stack_len < 2)
{
fprintf(stderr, "L%u: can't add, stack too short\n",
line_number);
exit(EXIT_FAILURE);
}
j += (*stack)->n;
pop(stack, line_number);
(*stack)->n += j;
}
