#include <stdio.h>

int main()
{
    int n, size[7], i, t, p, sum = 0;
    scanf("%d", &n);
    for (i = 0; i < 6; i++)
    {
        scanf("%d", &size[i]);
    }
    scanf("%d %d", &t, &p);
    for (i = 0; i < 6; i++)
    {
        sum += size[i] / t;
        if (size[i] % t != 0) sum++;
    }
    printf("%d\n%d %d",sum ,n / p, n % p);
    return 0;
}