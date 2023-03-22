#include <stdio.h>

/**
 * fibonacci - Generate the n-th term in the Fibonacci sequence.
 * @n: The term number to generate.
 *
 * Return: The n-th term in the Fibonacci sequence.
 */
int fibonacci(int n)
{
  if (n <= 1)
    return n;

  return fibonacci(n - 1) + fibonacci(n - 2);
}

/**
 * main - Print the first 10 terms in the Fibonacci sequence.
 *
 * Return: Always 0.
 */
int main(void)
{
  int i;

  for (i = 0; i < 10; i++)
  {
    printf("%d, ", fibonacci(i));
  }
  printf("\n");

  return (0);
}
