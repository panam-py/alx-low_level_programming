#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds all args and prints result
 *@argc: Variable carrying amount of command line arguments passed
 *@argv: Array of all command line arguments
 *Return: ZERO if successful or 1 if failed
 */
int main(int argc, char *argv[])
{
int i, s, j, cur;
s = 0;
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
cur = atoi(argv[i]);
s += cur;
}
printf("%d\n", s);
return (0);
}
