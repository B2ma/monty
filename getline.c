#include "monty.h"
/**
  * _getline - custom getline() function in C reads a line of input from the
  *	provided stream (file) and stores it in the buffer pointed to by
  *	lineptr. The buffer size is initially set to the value pointed to by n
  * @lineptr: double pointer to line in a file
  * @n: the size of the allocated buffer pointed to by lineptr
  * @stream:  file from which the function reads the input
  * Return: the number of characters read or -1 if it fails
  */
ssize_t _getline(char **lineptr, size_t *n, FILE *stream)
{
ssize_t len = 0, bufsize = 128;
char *line = (char *)malloc(bufsize), *new_line = NULL;
int c;
if (lineptr == NULL || n == NULL || stream == NULL || line == NULL)
{
return (-1);
}
while ((c = fgetc(stream)) != EOF)
{
line[len++] = c;
if (len >= bufsize)
{
bufsize += 128, new_line = (char *)_realloc(line, bufsize, bufsize + 128);
if (new_line == NULL)
{
free(line);
return (-1);
}
line = new_line;
}
if (c == '\n')
{
break;
}
}
if (len == 0 && c == EOF)
{
free(line);
return (-1);
}
line[len] = '\0';
if (*lineptr != NULL)
{
free(*lineptr);
}
*lineptr = line, *n = len;
return (len);
}
