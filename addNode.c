#include "monty.h"

/**
 * addNode - add a new node to a circular linked list
 * @stack: double pointer to the beginning of the circular linked list
 * @n: value to add to the new node
 *
 * Description: the function will add the node to the begining if in
 * stack mode and the end if in queue mode
 *
 * Return: pointer to the new node, or NULL on failure
 */
stack_t *addNode(stack_t **stack, const int n)
{
stack_t *newNode;

if (stack == NULL)
return (NULL);
newNode = malloc(sizeof(stack_t));
if (newNode == NULL)
return (NULL);
newNode->n = n;
if (*stack == NULL)
{
newNode->prev = newNode;
newNode->next = newNode;
}
else
{
(*stack)->prev->next = newNode;
newNode->prev = (*stack)->prev;
(*stack)->prev = newNode;
newNode->next = *stack;
}
if (dlist.queue == STACK || dlist.stack_len == 0)
*stack = newNode;
return (newNode);
}
