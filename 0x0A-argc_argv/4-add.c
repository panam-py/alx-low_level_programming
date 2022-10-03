#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds all args and prints result
 *@argc: Variable carrying amount of command line arguments passed
 *@argv: Array of all command line arguments
 *Return: ZERO if successful or 1 if failed
 */
int main(int argc, char *argv[])
{
int i, s, cur;
s = 0;
for (i = 1; i < argc; i++)
{
cur = atoi(argv[i]);
if (cur == 0)
{
printf("Error\n");
return (1);
}
s += cur;
}
printf("%d\n", s);
return (0);
}
