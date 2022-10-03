#include <stdio.h>
#define UNUSED(argv) (void)(argv)

/**
 * main - Prints the amount of command line arguments passed
 *@argc: Variable carrying amount of command line arguments passed
 *@argv: Array of all command line arguments
 *Return: ZERO
 */
int main(int argc, char *argv[])
{
UNUSED(argv);
printf("%d\n", argc - 1);
return (0);
}
