#include "monty.h"

/**
* pop - a function that removes elements in a stack
* @stack: pointer to the top of the stack
* @line_number: number where the instruction appears.
*
*/

void pop(stack_t **stack, unsigned int line_number)
{
stack_t *temp = *stack;
if (dlist.stack_len == 0)
{
fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
exit(EXIT_FAILURE);
}
(*stack)->next->prev = (*stack)->prev;
(*stack)->prev->next = (*stack)->next;
if (dlist.stack_len != 1)
*stack = (*stack)->next;
else
*stack = NULL;
free(temp);
dlist.stack_len--;
}
