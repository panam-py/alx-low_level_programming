#include "main.h"

/**
 * print_most_numbers - Prints all numbers from 0 - 9, 2 and 4 excluded
 *
 * Return: void
*/
void print_most_numbers(void)
{
int i;
for (i = 48; i <= 57; i++)
{
if (i != 50 && i != 52)
_putchar(i);
}
_putchar('\n');
}
