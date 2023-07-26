#include "monty.h"

/**
 * opCode - check op against valid opcodes
 * @op: op to check
 * @stack: double pointer to the beginnig of the stack
 * @line_number: script line number
 *
 * Return: void
 */
void opCode(char *op, stack_t **stack, unsigned int line_number)
{
size_t i;
instruction_t instructions[] = {
{"push", push},
{"pall", pall},
{"pint", pint},
{"pop", pop},
{"swap", swap},
{"add", add},
{"nop", nop},
};

for (i = 0; instructions[i].opcode != NULL; i++)
{
if (strcmp(instructions[i].opcode, op) == 0)
{
instructions[i].f(stack, line_number);
return;
}
}

fprintf(stderr, "L%u: unknown instruction %s\n", line_number, op);
exit(EXIT_FAILURE);
}
