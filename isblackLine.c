#include "monty.h"

/**
 * is_blank_line - Check if a line is blank
 *	(contains only white-space characters)
 * @line: The input line to check
 *
 * Return: 0 true, 1 otherswise
 */
int is_blank_line(const char *line)
{
while (*line != '\0')
{
if (!isspace((unsigned char)*line))
{
return (0);
}
line++;
}
return (1);
}
