#include <stdio.h>

/**
 * main- Prints the first 50 fibonacci numbers
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
int first, second, fib, count;
first = 1;
second = 2;
printf("%d, %d, ", first, second);
for (count = 1; count <= 48; count++)
{
fib = first + second;
printf("%d, ", fib);
first = second;
second = fib;
}
printf("\n");
return (0);
}
