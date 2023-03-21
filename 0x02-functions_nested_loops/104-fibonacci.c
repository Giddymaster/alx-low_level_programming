#include <stdio.h>

int main(void)
{
    int prev1 = 1, prev2 = 2, current, count;

    printf("%d, %d, ", prev1, prev2);

    for (count = 3; count <= 98; count++)
    {
        current = prev1 + prev2;
        printf("%d", current);

        if (count < 98)
        {
            printf(", ");
        }

        prev1 = prev2;
        prev2 = current;
    }

    printf("\n");

    return 0;
}
