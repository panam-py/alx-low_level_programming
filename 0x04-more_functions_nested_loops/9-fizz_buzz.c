#include <stdio.h>

/**
 * main- Prints numbers from 1 - 100, denoting multiples of 3 as Fizz
 * and multiples of 5 as Buzz and both as FizzBuzz
 *
 * Return: void
*/
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
printf(" FizzBuzz");
else if (i % 3 == 0)
printf(" Fizz");
else if (i % 5 == 0)
printf(" Buzz");
else
{
if (i == 1)
printf("%d", i);
else
printf(" %d", i);
}
}
printf("\n");
return (0);
}
