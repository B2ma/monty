#include "monty.h"

/**
 * mod - compute remainder of second element divided by top element
 * @stack: double pointer to head of stack
 * @line_number: line where the instruction appears
 */
void mod(stack_t **stack, unsigned int line_number)
{
int n;

if (dlist.stack_len < 2)
{
fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
exit(EXIT_FAILURE);
}
n = (*stack)->n;
pop(stack, line_number);
if (n == 0)
{
fprintf(stderr, "L%u: division by zero\n", line_number);
exit(EXIT_FAILURE);
}
(*stack)->n %= n;
}
