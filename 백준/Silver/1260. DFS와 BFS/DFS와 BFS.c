#include <stdio.h>

int arr[1001][1001];
int visit[1001], q[1001], n;

void dfs(int v)
{
    visit[v] = 1;
    printf("%d ", v);
    for (int i = 1; i <= n; i++)
    {
        if (visit[i] == 1) continue;
        if (arr[v][i] == 0) continue;
        dfs(i);
    }
}

void bfs(int start)
{
    int front = 0, rear = 0;
    q[rear++] = start;
    visit[start] = 1;
    printf("%d ", start);
    while (front != rear)
    {
        int now = q[front++];
        for (int i = 1; i <= n; i++)
        {
            if (visit[i] == 1) continue;
            if (arr[i][now] == 0) continue;
            q[rear++] = i;
            visit[i] = 1;
            printf("%d ", i);
        }
    }
}

int main()
{
    int m, v, a, b, i;
    scanf("%d %d %d", &n, &m, &v);
    for (i = 0; i < m; i++)
    {
        scanf("%d %d", &a, &b);
        arr[a][b]++;
        arr[b][a]++;
    }
    dfs(v);
    for (i = 0; i < 1001; i++)
    {
        visit[i] = 0;
    }
    printf("\n");
    bfs(v);
}