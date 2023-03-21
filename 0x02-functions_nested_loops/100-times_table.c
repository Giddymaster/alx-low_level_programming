#include "main.h"

/**
 * print_times_table - prints the multiplication table of n, starting from 0
 * @n: the number to generate the multiplication table of
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			int res = i * j;

			if (j == 0)
				printf("%d", res);
			else if (res < 10)
				printf("   %d", res);
			else if (res < 100)
				printf("  %d", res);
			else
				printf(" %d", res);
			if (j < n)
				printf(",");
		}
		printf("\n");
	}
}
