#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints from number to 98
 * @n: Number to start from
 * Return: Returns nothing (void)
*/
void print_to_98(int n)
{
if (n > 98)
{
for (; n > 98; n--)
{
printf("%d, ", n);
}
}
else if (n < 98)
{
for (; n < 98; n++)
{
printf("%d, ", n);
}
}
printf("%d\n", n);
}
