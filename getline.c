#include "monty.h"
ssize_t _getline(char **lineptr, size_t *n, FILE *stream)
{
ssize_t len = 0, bufsize = 128;
char *line = (char *)malloc(bufsize), *new_line = NULL;
int c;
if (lineptr == NULL || n == NULL || stream == NULL)
{
return (-1);
}
if (line == NULL)
{
return (-1);
}
while ((c = fgetc(stream)) != EOF)
{
line[len++] = c;
if (len >= bufsize)
{
bufsize += 128;
new_line = (char *)_realloc(line, bufsize, bufsize + 128);
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
*lineptr = line;
*n = len;
return (len);
}
