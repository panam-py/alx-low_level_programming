#include "main.h"

/**
 * print_sign - Checks the sign of a number
 * @n: Number to be checked
 * Return: 1 if n greater than 0, -1 otherwise
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
else
{
_putchar(45);
return (-1);
}
}
