#include "monty.h"
/**
* push - pushes an element to the stack
* @stack: double pointer to stack
* @value: The value to assign to the pushed stack.
*/
void push(stack_t **stack, int value)
{
stack_t *newNode = malloc(sizeof(stack_t));
if (!newNode)
{
fprintf(stderr, "Error: malloc failed\n");
exit(EXIT_FAILURE);
}

newNode->n = value;
newNode->prev = NULL;

if (*stack)
{
newNode->next = *stack;
(*stack)->prev = newNode;
}
else
{
newNode->next = NULL;
}

*stack = newNode;
}
