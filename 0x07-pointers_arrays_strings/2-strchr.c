#include "main.h"
#include <stddef.h>

/**
 * _strchr - Returns the pointer to the first
 * occurence of character in a string
 * @s: The string to be searched
 * @c: The character to be searched fir
 * Return: THe pointer to the first occurence of character or NULL
*/
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
if (*s == c)
{
return (s);
}
return (NULL);
}
