#include "monty.h"

/**
* rotr - rotates the stack to the bottom.
* @stack: double pointer to the begining of the linked list
* @line_number: line number where the instruction appears
*
* Return: void
*/
void rotr(stack_t **stack, unsigned int line_number)
{
(void)line_number;

if (*stack)
*stack = (*stack)->prev;
}
