#include "monty.h"

/**
 * sub - subtracts the top element of the stack from the second top
 *	element of the stack, the result is stored in the second
 *	top element of the stack, anid the top element is removed
 * @stack: double pointer to head of stack
 * @line_number: the line number where the instruction appears
 *
 * Return: void
 */
void sub(stack_t **stack, unsigned int line_number)
{
int n;

if (dlist.stack_len < 2)
{
fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
exit(EXIT_FAILURE);
}
n = (*stack)->n;
pop(stack, line_number);
(*stack)->n -= n;
}
