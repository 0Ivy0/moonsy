#include <stdio.h>

int dish[1000000];

int main()
{
    int n, i, cnt = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &dish[i]);
    }
    for (i = 1; i < n; i++)
    {
        if (dish[i - 1] >= dish[i])
        {
            cnt++;
        }
    }
    if (dish[0] <= dish[n - 1]) cnt++;
    printf("%d", cnt);
    return 0;
}