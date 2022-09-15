#include "main.h"

/**
 * _isupper - Checks if a letter is uppercase
 * @c: Letter to check
 * Return: 1 if letter is uppercase, 0 otherwise
*/
int _isupper(int c)
{
if (c >= 65 && c <= 90)
return (1);
else
return (0);
}
