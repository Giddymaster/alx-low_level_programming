#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: Number of times the character '\' should be printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
int i, j;

if (n <= 0)
{
putchar('\n');
return;
}

for (i = 1; i <= n; i++)
{
for (j = 1; j < i; j++)
putchar(' ');

putchar('\\');
putchar('\n');
}
}
