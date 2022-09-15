#include "main.h"

/**
 * print_square - Prints a square using #
 * @size: The size of square to be printed
 * Return: void
*/
// int main(void)
// {
//     print_square(2);
//     print_square(10);
//     print_square(0);
//     return (0);
// }
void print_square(int size)
{
if (size < 0)
{
_putchar('\n');
}
int i, j;
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size; j++)
{
_putchar(35);
if (j == size)
{
_putchar('\n');
}
}
}
}

