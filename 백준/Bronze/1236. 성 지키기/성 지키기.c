#include <stdio.h>

int main()
{
    char castle[51][51];
    int m, n, i, j, f1, f2, cnt1 = 0, cnt2 = 0;
    scanf("%d %d", &n, &m);

    for (i = 0; i < n; i++)
    {
        scanf("%s", castle[i]);
    }

    for (i = 0; i < n; i++)
    {
        f1 = 0;
        for (j = 0; j < m; j++)
        {
            if (castle[i][j] == 'X')
            {
                f1 = 1;
            }
        }
        if (f1 == 0) cnt1++;
    }
    for (i = 0; i < m; i++)
    {
        f2 = 0;
        for (j = 0; j < n; j++)
        {
            if (castle[j][i] == 'X')
            {
                f2 = 1;
            }
        }
        if (f2 == 0) cnt2++;
    }
    if (cnt1 < cnt2) cnt1 = cnt2;
    printf("%d", cnt1);
    return 0;
}