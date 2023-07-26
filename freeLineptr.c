#include "monty.h"

/**
 * freeLineptr - free line pointer returned by getline
 * @status: exit status
 * @arg_str: pointer to line
 *
 * Return: void
 */
void freeLineptr(int status, void *arg_str)
{
char **lineptr = arg_str;

(void)status;
if (*lineptr != NULL)
free(*lineptr);
}
