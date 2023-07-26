#include "monty.h"
#include <stdlib.h>
#include <string.h>

/**
  * _realloc - Reallocates a memory block
  *using malloc and free
  * @ptr: the existing memory
  * @old_size: old size
  * @new_size: new size
  * Return: nothing
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *newMalloc;
unsigned int addSize;

if (new_size == old_size)
return (ptr);
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
newMalloc = malloc(new_size);
if (ptr == NULL)
{
return (newMalloc);
}
if (newMalloc == NULL)
return (NULL);
if (ptr != NULL)
{
addSize = old_size < new_size ? old_size : new_size;
memcpy(newMalloc, ptr, addSize);
free(ptr);
}
return (newMalloc);
}
