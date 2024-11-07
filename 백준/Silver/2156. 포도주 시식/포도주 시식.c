#include <stdio.h>

int max(int a, int b);

int podo[10001], dp[10001];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &podo[i]);
    }
    dp[0] = podo[0];
    dp[1] = podo[0] + podo[1];
    dp[2] = max(max(dp[1], podo[0] + podo[2]), podo[1] + podo[2]);
    for(int i = 3; i < n; i++)
    {
        dp[i] = max(max(podo[i] + podo[i - 1] + dp[i - 3], podo[i] + dp[i - 2]), dp[i - 1]);
    }
    printf("%d", dp[n - 1]);
    return 0;
}

int max(int a, int b)
{
    if (a > b) return a;
    else return b;
}