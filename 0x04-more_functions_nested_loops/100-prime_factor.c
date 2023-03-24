#include <stdio.h>
#include <math.h>

int main(void)
{
long n = 612852475143;
int largest_factor = 0;

/**
 * Divide by 2 until it's no longer even
*/
while (n % 2 == 0)
{
largest_factor = 2;
n /= 2;
}

/**
 * Now n is odd, so we only need to check odd factors up to sqrt(n)
*/
for (int i = 3; i <= sqrt(n); i += 2)
{
while (n % i == 0)
{
largest_factor = i;
n /= i;
}
}

/**
 * If n is still greater than 2, then it's prime and a factor
*/
if (n > 2)
largest_factor = n;

printf("%d\n", largest_factor);

return 0;
}

