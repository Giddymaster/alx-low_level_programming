#include <stdio.h>

int main(void)
{
    int i, num1 = 1, num2 = 2, next_num;

    printf("%d, %d", num1, num2);

    for (i = 3; i <= 50; i++)
    {
        next_num = num1 + num2;
        printf(", %d", next_num);
        num1 = num2;
        num2 = next_num;
    }

    printf("\n");

    return 0;
}
