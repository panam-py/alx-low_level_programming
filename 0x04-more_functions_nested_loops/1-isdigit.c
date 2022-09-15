#include "main.h"

/**
 * _isdigit - Checks is a number is a digit
 * @c: Digit to check
 * Return: 1 if c is digit, 0 otherwise
*/
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);
else
return (0);
}
