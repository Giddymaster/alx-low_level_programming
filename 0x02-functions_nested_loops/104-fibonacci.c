#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: Always 0
 */

int main(void)
{
    unsigned long int i, j, k;
    unsigned long int j_prev, k_prev, overflow;

    j = 1;
    k = 2;

    printf("%lu, %lu", j, k);

    for (i = 2; i < 98; i++)
    {
        if (k > 999999999)
        {
            overflow = (k / 1000000000);
            k %= 1000000000;
            j += overflow;
        }

        j_prev = j;
        k_prev = k;

        k = k_prev + j_prev;
        j = k_prev;

        printf(", %lu", k);
    }

    printf("\n");

    return (0);
}
