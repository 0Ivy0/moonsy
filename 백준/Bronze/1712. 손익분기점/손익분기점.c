#include <stdio.h>

int main()
{
    long long int a, b, c, wa, bep = 0;
    scanf("%lld %lld %lld", &a, &b, &c);
    if (b >= c)
    {
        printf("-1");
        return 0;
    }
    printf("%lld", a / (c - b) + 1);
    return 0;
}