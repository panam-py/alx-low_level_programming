#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers from 0 to 14
 *
 * Return: void
*/
void more_numbers(void)
{
int i, j;
for (i = 0; i <= 14; i++)
{
j = 10 * i;
_putchar((j / 10) + 48);
_putchar((j % 10) + 48);
}
_putchar('\n');
}
