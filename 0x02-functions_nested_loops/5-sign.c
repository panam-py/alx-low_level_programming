#include "main.h"
#include <stdio.h>

/**
 * print_sign - Checks the sign of a number
 * @n: Number to be checked
 * Return: 1 if n greater than 0, -1 otherwise
*/
int print_sign(int n)
{
if (n > 0)
{
printf("+");
return (1);
}
else if (n == 0)
{
printf("0");
return (0);
}
else
{
printf("-");
return (-1);
}
}
