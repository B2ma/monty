#include "monty.h"
/**
* main - main function
* @argc: argument count
* @argv: argument vector
* Return: integer
*/
int main(int argc, char *argv[])
{
int i;
unsigned int line_number = 1;
stack_t *stack = NULL;
char opcode[100];
if (argc != 2)
{
fprintf(stderr, "USAGE: %s file\n", argv[0]);
exit(EXIT_FAILURE);
}
FILE *file = fopen(argv[1], "r");
if (!file)
{
fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
exit(EXIT_FAILURE);
}
instruction_t instructions[] = {
{"push", push}, {"pall", pall}, {"pint", pint}, {"pop", pop},
{"swap", swap}, {"add", add}, {"nop", nop}};
while (fscanf(file, "%99s", opcode) == 1)
{
for (i = 0; i < sizeof(instructions) / sizeof(instruction_t); i++)
{
if (strcmp(opcode, instructions[i].opcode) == 0)
{
instructions[i].f(&stack, line_number);
break;
}
}
if (i == sizeof(instructions) / sizeof(instruction_t))
{
fprintf(stderr, "L%u: unknown instruction %s\n", line_number, opcode);
fclose(file);
exit(EXIT_FAILURE);
}
line_number++;
}
fclose(file);
return (0);
}
