#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints from number to 98
 * @n: Number to start from
 * Return: Returns nothing (void)
*/
int main(void)
{
print_to_98(0);
print_to_98(98);
print_to_98(111);
print_to_98(81);
print_to_98(-10);
return (0);
}

void print_to_98(int n)
{
if (n > 98)
{
for (; n <= 98; n--)
{
printf("%d, ", n);
}
}
else if (n < 98)
{
for (; n <= 98; n++)
{
printf("%d, ", n);
}
}
printf("98\n");
}