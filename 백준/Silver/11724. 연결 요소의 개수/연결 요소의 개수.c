#include <stdio.h>

int cnt = 0, arr[1001][1001], visit[1001];

void dfs(int t, int n)
{
    visit[t] = 1;
    for (int i = 1; i <= n; i++)
    {
        if (visit[i] == 1 || !arr[t][i]) continue;
        dfs(i, n);
    }
}

int main()
{
    int n, m, u, v;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < m; i++)
    {
        scanf("%d %d", &u, &v);
        arr[u][v] = 1;
        arr[v][u] = 1;
    }
    for (int i = 1; i <= n; i++)
    {
        if (visit[i] == 0)
        {
            cnt++;
            visit[i] = 1;
            dfs(i, n);
        }
    }
    printf("%d", cnt);
    return 0;
}
