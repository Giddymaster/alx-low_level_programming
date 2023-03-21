/**
 * main - Entry point
 *
 * Description: Prints the first 98 numbers of the Fibonacci sequence,
 * starting with 1 and 2, separated by a comma and a space
 *
 * Return: Always 0 (Success)
 */

#include <stdio.h>

int main(void)
{
    int a = 1, b = 2, c, i;

    printf("%d, %d, ", a, b);

    for (i = 3; i <= 98; i++)
    {
        c = a + b;
        printf("%d", c);

        if (i != 98)
        {
            printf(", ");
        }

        a = b;
        b = c;
    }

    printf("\n");
    return (0);
}
