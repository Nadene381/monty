#include "monty.h"
/**
* mySwitch- Function that handles the different opcode instructions
*@par: pointer passed in function
*@opcode: pointer passed in function
*@line_number: variable passed in function
* Return: 0
*/
void mySwitch(const char *opcode, const char *par, unsigned int line_number)
{
stack_t *stack = NULL;
int n;

if (opcode == NULL)
{
fprintf(stderr, "L%d: unknown instruction (NULL)\n", line_number);
exit(EXIT_FAILURE);
}
switch (opcode[0])
{
case 'p':
if (strcmp(opcode, "push") == 0)
{
if (par == NULL)
{
fprintf(stderr, "L%d: usage: push integer\n", line_number);
exit(EXIT_FAILURE);
}
n = atoi(par);
if (n == 0 && strcmp(par, "0") != 0)
{
fprintf(stderr, "L%d: usage: push integer\n", line_number);
exit(EXIT_FAILURE);
}
push(&stack, n, line_number);
printf("%d\n",n);
}
else if (strcmp(opcode, "pall") == 0)
{
pall(&stack, line_number);
}
else if (strcmp(opcode, "pint") == 0)
{
pint(&stack, line_number);
}
break;
case 'n':
if (strcmp(opcode, "nop") == 0)
{
nop(&stack, line_number);
}
else
{
fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
exit(EXIT_FAILURE);
}
break;
default:
fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
exit(EXIT_FAILURE);
}
}

