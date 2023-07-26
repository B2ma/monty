#include "monty.h"

/**
 * div_func - divide second element of stack by top element
 * @stack: double pointer to head of stack
 * @line_number: line number where the instruction appears
 */
void div_func(stack_t **stack, unsigned int line_number)
{
int n;

if (dlist.stack_len < 2)
{
fprintf(stderr, "L%u: can't div, stack too short\n", line_number);
exit(EXIT_FAILURE);
}
n = (*stack)->n;
pop(stack, line_number);
if (n == 0)
{
fprintf(stderr, "L%u: division by zero\n", line_number);
exit(EXIT_FAILURE);
}
(*stack)->n /= n;
}
