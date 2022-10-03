#include <stdio.h>
#define UNUSED(argc) (void)(argc)

/**
 *main - Prints out the name of the executable
 *@argc: Variable carrying amount of command line arguments passed
 *@argv: Array of all command line arguments
 *Return: ZERO
 */
int main(int argc, char *argv[])
{
UNUSED(argc);
printf("%s\n", argv[0]);
return (0);
}
