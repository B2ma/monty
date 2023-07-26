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
stack_t *temp = *stack;
int m = 0, itr = 0;

while (temp)
{
temp = temp->next;
itr++;
}
if (*stack == NULL || (*stack)->next == NULL || itr <= 1)
{
fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
exit(EXIT_FAILURE);
}
m = (*stack)->next->n - (*stack)->n;
pop(stack, line_number);
(*stack)->n = m;
}
