#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    unsigned long int i, current, previous, temp;

    current = 2;
    previous = 1;

    printf("%lu, %lu", previous, current);

    for (i = 2; i < 98; i++)
    {
        temp = current;
        current += previous;
        previous = temp;

        printf(", %lu", current);
    }

    printf("\n");

    return (0);
}
