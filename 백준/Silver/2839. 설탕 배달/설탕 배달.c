#include <stdio.h>

int main()
{
    int n, sum = 0;
    scanf("%d", &n);

    while (n >= 0)
    {
        if (n % 5 == 0)
        {
            printf("%d", sum + n / 5);
            return 0;
        }
        n -= 3;
        sum++;
        if (n < 0)
        {
            printf("-1");
            return 0;
        }
    }
    printf("%d", sum);

    return 0;
}