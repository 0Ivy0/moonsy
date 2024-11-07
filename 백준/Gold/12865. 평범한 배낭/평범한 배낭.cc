#include <stdio.h>

int max(int a, int b);

int yaho[100001];

int main()
{
    int n, k, w[101], v[101], save;
    scanf("%d %d", &n, &k);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d %d", &w[i], &v[i]);
        for (int j = k; j >= w[i]; j--)
        {
            yaho[j] = max(v[i] + yaho[j - w[i]], yaho[j]);
        }
    }
    printf("%d", yaho[k]);
    return 0;
}

int max(int a, int b)
{
    if (a > b) return a;
    else return b;
}