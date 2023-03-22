#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
    int count;
    unsigned long num1 = 0, num2 = 1, sum;

    for (count = 0; count < 50; count++)
    {
        sum = num1 + num2;
        printf("%lu", sum);

        num1 = num2;
        num2 = sum;

        if (count != 49)
            printf(", ");
    }

    printf("\n");

    return (0);
}
