#include "monty.h"
/**
* swap - swaps the top two elements of the stack
* @stack: double pointer to stack
* @line_number: the line where the instruction appears
*/
void swap(stack_t **stack, unsigned int line_number)
{
stack_t *next;

if (dlist.stack_len < 2)
{
fprintf(stderr,	"L%u: can't swap, stack too short\n",
line_number);
exit(EXIT_FAILURE);
}
if (dlist.stack_len == 2)
{
*stack = (*stack)->next;
return;
}
next = (*stack)->next;
next->prev = (*stack)->prev;
(*stack)->prev->next = next;
(*stack)->prev = next;
(*stack)->next = next->next;
next->next->prev = *stack;
next->next = *stack;
*stack = next;
}
