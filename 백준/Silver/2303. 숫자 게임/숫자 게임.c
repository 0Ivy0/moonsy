#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, j, p, k, cnt, max = 0, index, save, card[1001][6];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        save = 0;
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &card[i][j]);
        }
        for (j = 0; j < 3; j++)
        {
            for (k = 1 + j; k < 4; k++)
            {
                for (p = 1 + k; p < 5; p++)
                {
                    cnt = card[i][j] + card[i][k] + card[i][p];
                    if (save < cnt % 10) save = cnt % 10;
                }
            }
        }
        if (max <= save)
        {
            max = save;
            index = i + 1;
        }
    }
    printf("%d", index);
    return 0;
}