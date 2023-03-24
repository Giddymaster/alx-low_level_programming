#include <stdio.h>
#include <math.h>

int main(void)
{
long n = 612852475143;
int largest_factor = 0;

while (n % 2 == 0)
{
largest_factor = 2;
n /= 2;
}
for (int i = 3; i <= sqrt(n); i += 2)
{
while (n % i == 0)
{
largest_factor = i;
n /= i;
}
}

if (n > 2)
largest_factor = n;

printf("%d\n", largest_factor);

return 0;
}
