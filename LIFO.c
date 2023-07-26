#include "monty.h"

/**
 * lifo  - sets the format of the data to a stack (LIFO)
 * @stack: double pointer to the beginning of the stack
 * @line_number: line number where the instruction appears.
 *
 * Return: void
 */
void lifo(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	dlist.queue = STACK;
}
