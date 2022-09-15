#include "main.h"

/**
* print_square - prints hashes squares.
* @size: size of the square.
* Return: no return.
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
int i, j;

for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
_putchar(35);
}
if (i != size - 1)
_putchar('\n');
}
_putchar('\n');
}
