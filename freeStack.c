#include "monty.h"

/**
 * freeStack - Frees all elements of the stack.
 * @arg: pointer to the stack.
 * @status: status of exit
 * Return: void
 */
void freeStack(int status, void *arg)
{
stack_t **stack;
stack_t *next;

(void)status;

stack = (stack_t **)arg;
if (*stack)
{
(*stack)->prev->next = NULL;
(*stack)->prev = NULL;
}
while (*stack != NULL)
{
next = (*stack)->next;
free(*stack);
*stack = next;
}
dlist.stack_len = 0;
}
