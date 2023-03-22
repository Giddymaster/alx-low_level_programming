#include <stdio.h>

/**
 * main - Prints the sum of the even-valued terms
 *        in the Fibonacci sequence whose values
 *        do not exceed 4,000,000
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    int first = 1, second = 2, next = 0, sum = 2;

    while (next <= 4000000)
    {
        next = first + second;
        first = second;
        second = next;

        if (next % 2 == 0)
            sum += next;
    }

    printf("%d\n", sum);

    return (0);
}
