#include <stdio.h>

/**
 * main - Prints single digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int digit = 0;

    while (digit < 10)
    {
        putchar(digit + '0');
        digit++;
    }

    putchar('\n');

    return (0);
}