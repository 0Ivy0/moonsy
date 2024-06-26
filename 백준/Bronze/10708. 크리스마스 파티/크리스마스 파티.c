#include <stdio.h>

int main()
{
    int n, m, i, j, cnt, target[101], score[101], score_s[101] = {0,};
    scanf("%d %d", &n, &m);
    for (i = 0; i < m; i++)
    {
        scanf("%d", &target[i]);
    }
    for (i = 0; i < m; i++)
    {
        cnt = 0;
        for (j = 0; j < n; j++)
        {
            scanf("%d", &score[j]);
            if (score[j] != target[i]) cnt++;
        }
        score_s[target[i] - 1] += cnt;
        for (j = 0; j < n; j++)
        {
            if (score[j] == target[i]) score_s[j] += 1;
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\n", score_s[i]);
    }
    return 0;
}