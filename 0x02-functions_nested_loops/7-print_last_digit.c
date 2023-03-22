#include "main.h"

/**
* print_last_digit - Prints the last digit of a number
* @n: The number to extract the last digit from
*
* Return: The value of the last digit
*/
int print_last_digit(int n)
{
int last_digit;

if (n == INT_MIN) // special case: absolute value of INT_MIN is not representable
last_digit = 8;
else if (n < 0)
n = -n;

last_digit = n % 10;

_putchar(last_digit + '0');

return (last_digit);
}
