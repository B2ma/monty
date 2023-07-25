#include "monty.h"

/**
 * pall - prints all the values in stack starting
 * from the top
 * @stack: double pointer to top of the stack
 * @line_number: shows the number where the instruction appears.
 */

void pall(stack_t **stack, unsigned int line_number)
{
stack_t *current = *stack;
(void)line_number;
while (current != NULL)
{
printf("%d\n", current->n);
current = current->next;
}
}
