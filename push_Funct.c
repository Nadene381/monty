#include "monty.h"
/**
* push - Function that push an element into stack
* @stack: Double pointer passed in function
* @line_number: variable passed in function
* @n: variable passed in function
* Return: 0
*/
void push(stack_t **stack, int n, unsigned int line_number)
{
stack_t *new_node = malloc(sizeof(stack_t));
line_number = line_number;
if(new_node == NULL)
{
fprintf(stderr, "Error: malloc failed\n");
exit(EXIT_FAILURE);
}
new_node->n = n;
new_node->prev = *stack;
*stack = new_node;
}
