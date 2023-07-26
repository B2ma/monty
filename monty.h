#ifndef MONTY_H
#define MONTY_H
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * struct dlist_s - struct to contain the main variables of the Monty interpreter
 * @queue: flag to determine if in stack vs queue mode
 * @stack_len: length of the stack
 */
typedef struct dlist_s
{
int queue;
size_t stack_len;
} dlist_t;

#define STACK 0
#define QUEUE 1
/* global struct to hold flag for queue and stack length */
extern dlist_t dlist;

/**
 * struct stack_s - doubly linked list representation of a stack or queue
 * @n: integer
 * @prev: points to the previous element of the stack or queue
 * @next: points to the next element of the stack or queue
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);
void freeStack(int status, void *arg);
void freeLineptr(int status, void *arg_str);
void mul(stack_t **stack, unsigned int line_number);
void div_func(stack_t **stack, unsigned int line_number);
void sub(stack_t **stack, unsigned int line_number);
stack_t *addNode(stack_t **stack, const int n);
void opCode(char *op, stack_t **stack, unsigned int line_number);
void closeFile(int status, void *arg_str);
void rotl(stack_t **stack, unsigned int line_number);
void rotr(stack_t **stack, unsigned int line_number);
void fifo(stack_t **stack, unsigned int line_number);
void lifo(stack_t **stack, unsigned int line_number);
void mod(stack_t **stack, unsigned int line_number);
void pchar(stack_t **stack, unsigned int line_number);
void pstr(stack_t **stack, unsigned int line_number);
int isAscii(int c);
int is_blank_line(const char *line);
ssize_t _getline(char **lineptr, size_t *n, FILE *stream);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
#endif
