#include "main.h"
#include <ctype.h>

/**
 * _islower - Checks if a character is lower case
 * @c: The character in ASCII code
 * Return: 1 if character is lowercase, 0 if characher if otherwise
*/
int _islower(int c)
{
if (islower(c))
return (1);
else
return (0);
}
