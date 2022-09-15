#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lower case 10 times
 *
 * Returns - Always 0 (Success)
*/
void print_alphabet_x10(void)
{
int global_count;
for (global_count = 1; global_count <= 10; global_count++)
{
int letter;
for (letter = 97; letter <= 122; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
}
