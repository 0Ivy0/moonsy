#include <stdio.h>

int main()
{
    int n, m, i, j, k, cnt = 0;
    scanf("%d %d", &n, &m);
    for (i = 0; i <= n + m; i++)
    {
        for (j = 0; j <= n; j++)
        {
            for (k = 0; k <= m; k++)
            {
                if (i == j + k) cnt++;
            }
        }
    }
    printf("%d", cnt);
    return 0;
}