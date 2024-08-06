#include <stdio.h>

int main()
{
    char str[1001][1001];
    int n, i, j, x, y, save, f = 0, f1 = 0, f2 = 0, arr[6];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%s", &str[i]);
        for (j = 0; j < n; j++)
        {
            if (str[i][j] == '*' && f == 0)
            {
                x = i + 1;
                y = j;
                f = 1;
            }
            else if (str[i][j] == '*' && j == y) arr[2]++;
            else if (str[i][j] == '*' && f1 == 0)
            {
                arr[0] = y - j;
                f1 = 1;
            }
            else if ((str[i][j] == '_' || j == n - 1) && f2 == 0 && f1 == 1)
            {
                f2 = 1;
                if (j == n - 1 && str[i][j] == '*')
                {
                    arr[1] = n - y - 1;
                    continue;
                }
                arr[1] = j - y - 1;
            }
            else if (str[i][j] == '*' && f2 == 0 && f1 == 1) continue;
            else if (str[i][j] == '*' && j == y - 1) arr[3]++;
            else if (str[i][j] == '*' && j == y + 1) arr[4]++;
        }
    }
    printf("%d %d\n", x + 1, y + 1);
    for (i = 0; i < 5; i++)
    {
        if (i == 2)
        {
            printf("%d ", arr[2] - 1);
            continue;
        }
        printf("%d ", arr[i]);
    }
    return 0;
}