#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2,
 *        followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
unsigned long int fib1 = 1, fib2 = 2, fib_next;

printf("%lu, %lu", fib1, fib2);

for (i = 0; i < 48; i++)
{
fib_next = fib1 + fib2;
printf(", %lu", fib_next);
fib1 = fib2;
fib2 = fib_next;
}
printf("\n");

return (0);
}
