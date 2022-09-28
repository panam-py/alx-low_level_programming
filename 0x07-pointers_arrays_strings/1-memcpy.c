#include "main.h"

/**
 * _memcpy - Copies byte from source address to destination address
 * @dest: The destination addres
 * @src: The source address
 * @n: Amount of bytes to copy
 * Return: Pointer to the destination address
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for(i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
