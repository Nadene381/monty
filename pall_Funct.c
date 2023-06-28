#include "monty.h"
/**
* pall - Function that prints all values from top to bottom on stack
* @stack: Double pointer passed in function
* @line_number: variable passed in function
* Return: 0
*/
void pall(stack_t **stack, unsigned int line_number)
{
stack_t *index = *stack;
(void)line_number;
do {
printf("%d\n", index->n);
index = index->next;
} while (index != NULL);
}
