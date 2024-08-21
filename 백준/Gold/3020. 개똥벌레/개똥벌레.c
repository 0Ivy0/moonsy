#include <stdio.h>

long long int down[500001], up[500001], sum[500001];

int main()
{
    long long int n, num, h, i, cnt = 0, plus = 0, min = 500000;
    scanf("%lld %lld", &n, &h);
    for (i = 0; i < n; i++)
    {
        scanf("%lld", &num);
        if (i % 2 == 0) down[h - num]++;
        else up[num - 1]++;
    }
    for (i = h - 1; i >= 0; i--)
    {
        plus += up[i];
        sum[i] += plus;
    }
    plus = 0;
    for (i = 0; i < h; i++)
    {
        plus += down[i];
        sum[i] += plus;
        if (sum[i] < min)
        {
            min = sum[i];
            cnt = 1;
        }
        else if (min == sum[i]) cnt++;
    }
    printf("%lld %lld", min, cnt);
    return 0;
}