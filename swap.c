#include "monty.h"
/**
* swap - swaps the top two elements of the stack
* @stack: double pointer to stack
* @line_number: the line where the instruction appears
*/
void swap(stack_t **stack, unsigned int line_number)
{
int temp = (*stack)->n;
if (*stack == NULL || (*stack)->next == NULL)
{
fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
exit(EXIT_FAILURE);
}

(*stack)->n = (*stack)->next->n;
(*stack)->next->n = temp;
}
