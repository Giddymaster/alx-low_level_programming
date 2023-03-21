#include <stdio.h>

int main()
{
    long long int a = 0, b = 1, c = 0;
    int i, n = 100;

    printf("%lld, %lld", a, b);
    for (i = 2; i < n; i++)
    {
        c = a + b;
        printf(", %lld", c);
        a = b;
        b = c;
    }
    printf("\n");

    return 0;
}
