#include "main.h"

/**
 * times_table - Prints the 9 times table
 *
 * Return: void
*/
void times_table(void)
{
int a, b, ans;
for (a = 0; a <= 9; a++)
{
for (b = 0; b <= 9; b++)
{
ans = a * b;
if (ans <= 9)
_putchar(ans + 48);
else
{
_putchar((ans / 10) + 48);
_putchar((ans % 10) + 48);
}
_putchar(44);
_putchar(32);
}
_putchar('\n');
}
}
