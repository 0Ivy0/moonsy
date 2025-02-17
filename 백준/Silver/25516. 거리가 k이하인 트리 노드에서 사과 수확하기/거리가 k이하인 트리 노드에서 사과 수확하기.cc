#include <iostream>
#include <vector>

using namespace std;

vector<int>v[100001];
int apple[100001];
int visit[100001];
int n, k, a, b, cnt = 0;

void dfs(int yaho, int dfs_cnt)
{
    if (dfs_cnt >= k) return;
    visit[yaho] = 1;
    for (int i = 0; i < v[yaho].size(); i++)
    {
        if (visit[v[yaho][i]]) continue;
        if (apple[v[yaho][i]]) cnt++;
        dfs(v[yaho][i], dfs_cnt + 1);
    }
}

int main()
{
    scanf("%d %d", &n, &k);
    for (int i = 1; i < n; i++)
    {
        scanf("%d %d", &a, &b);
        v[a].push_back(b);
        v[b].push_back(a);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &apple[i]);
    }
    if (apple[0]) cnt++;
    dfs(0, 0);
    printf("%d", cnt);
    return 0;
}