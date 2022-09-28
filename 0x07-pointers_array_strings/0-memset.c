#include "main.h"

/**
 * _memset - Fills an address in memory with a constant byte
 * @s: Memory address to be filled.
 * @b: Byte to fill memory with.
 * @n: Amount of bytes to fill memory with
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i=0; i<n; i++)
{
s[i] = b;
}
return s;
}