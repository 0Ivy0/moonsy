#include <stdio.h>

int main()
{
    long long int n, i, j, a, b, save, s = 0;
    scanf("%lld", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%lld %lld", &a, &b);
        if (save > b && i != 0) continue;
        if (save > a && i != 0) s -= save - a;
        s += b - a;
        save = b;
    }
    printf("%lld", s);
    return 0;
}