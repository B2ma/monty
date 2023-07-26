#include "monty.h"
/**
  * isAscii checks if the supplied input is an ascii
  * @c: the input integer
  * Return: 1 success, 0 otherwise
  */

int isAscii(int c)
{
	return (c >= 0 && c <= 127);
}
