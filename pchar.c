#include "monty.h"
/**
 * pchar - print character from top of stack
 * @stack: double pointer to top of stack
 * @line_number: line number where the instruction appears
 */
void pchar(stack_t **stack, unsigned int line_number)
{
int character;

if (dlist.stack_len < 1)
{
fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
exit(EXIT_FAILURE);
}
character = (*stack)->n;
if (!isAscii(character))
{
fprintf(stderr, "L%u: can't pchar, value out of range\n", line_number);
exit(EXIT_FAILURE);
}
printf("%c\n", character);
}
