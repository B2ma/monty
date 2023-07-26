#include "monty.h"

/**
* rotl - rotates the stack to the top.
* @stack:double pointer tot he begining of the linked list
* @line_number:line number where the instruction appears
*
* Return: void
*/
void rotl(stack_t **stack, unsigned int line_number)
{
(void)line_number;

if (*stack)
*stack = (*stack)->next;
}
