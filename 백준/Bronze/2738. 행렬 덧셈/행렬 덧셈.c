#include <stdio.h>

int main()
{
    int n, m, i, j, arr[101][101], t;
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d ", &arr[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d ", &t);
            printf("%d ", t + arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}