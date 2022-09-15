#include "main.h"
#include <ctype.h>

/**
 * _isalpha - Returns 1 if a character is an alphabet or 0 if otherwise
 * @c: The character to check in ASCII
 * Return: 1 if c is a letter, 0 otherwise
*/
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
return (1);
else
return (0);
}
