#include "monty.h"
/**
* main - check the code
*@argc: variable passed in function
*@argv: variable passed in function
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
char line[100];
unsigned int line_number = 1;
char *opcode;
char *par;
FILE *myMontyFile;
while (argc != 2)
{
fprintf(stderr, "Usage: monty file\n");
exit(EXIT_FAILURE);
}
myMontyFile = fopen(argv[1], "r");
if (myMontyFile == NULL)
{
fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
exit(EXIT_FAILURE);
}
while (fgets(line, sizeof(line), myMontyFile) != NULL)
{
opcode = strtok(line, " \t\n");
par = strtok(NULL, " \t\n");
mySwitch(opcode, par, line_number);
line_number++;
}
fclose(myMontyFile);
return (0);
}
