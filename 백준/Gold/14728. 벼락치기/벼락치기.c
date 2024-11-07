#include <stdio.h>

int max(int a, int b);

int yaho[10001];

int main()
{
    int n, t, k[1001], s[1001];
    scanf("%d %d", &n, &t);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d %d", &k[i], &s[i]);
        for (int j = t; j >= k[i]; j--)
        {
            yaho[j] = max(s[i] + yaho[j - k[i]], yaho[j]);
        }
    }
    printf("%d", yaho[t]);
    return 0;
}

int max(int a, int b)
{
    if (a > b) return a;
    else return b;
}