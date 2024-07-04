#include <stdio.h>
#include <string.h>

int main()
{
    int n, m, k, i, j;
    scanf("%d %d %d", &n, &m, &k);
    if (n + m - 1 > k)
    {
        printf("NO");
        return 0;
    }
    else printf("YES\n");
    for (i = 0; i < n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            printf("%d ", j + i);
        }
        printf("\n");
    }
    return 0;
}