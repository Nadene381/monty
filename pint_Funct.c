#include "monty.h"
/**
*pint - prints value at the top of the stack, with new line
*@stack: douple pointer passed in function
*@line_number: variable passed in function
*Return: 0
*/
void pint(stack_t **stack, unsigned int line_number)
{
if (*stack == NULL)
{
fprintf(stderr, "L%d:can't pint, stack empty\n", line_number);
exit(EXIT_FAILURE);
}
printf("%d\n", (*stack)->n);
}
