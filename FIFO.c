#include "monty.h"

/**
 * fifo - sets the format of the data to a queue (FIFO)
 * @stack: double pointer to the beginning of the stack
 * @line_number: line number where the instruction appears.
 *
 * Return: void
 */
void fifo(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	dlist.queue = QUEUE;
}
