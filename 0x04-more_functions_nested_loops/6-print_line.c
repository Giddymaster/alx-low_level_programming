#include "main.h"
#include <stdio.h>

/**
 * print_line - draws a straight line of a specified length
 * @n: the length of the line to draw
 *
 * Return: void
 */
void print_line(int n)
{
if (n <= 0)
{
putchar('\n');
return;
}
for (int i = 0; i < n; i++)
putchar('_');
putchar('\n');
}
