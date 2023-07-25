#include "monty.h"

/**
* add - adds element to a stack
* @stack: pointer to start of the stack
* @line_number: number where the instruction appears.
*/

void add(stack_t **stack, unsigned int line_number)
{
if (*stack == NULL || (*stack)->next == NULL)
{
fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
exit(EXIT_FAILURE);
}

(*stack)->next->n += (*stack)->n;
pop(stack, line_number);
}
