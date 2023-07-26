#include "monty.h"

/**
 * closeFile - close file stream
 * @status: status passed to exit
 * @arg_str: pointer to file stream
 *
 * Return: void
 */
void closeFile(int status, void *arg_str)
{
FILE *file;

(void)status;

file = (FILE *) arg_str;
fclose(file);
}
