#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int>v[100001];
vector<int>visit(100001);
vector<int>wa(100001);
queue<int>q;

void bfs(int yaho)
{
    visit[yaho] = 1;
    q.push(yaho);
    while (!q.empty())
    {
        int now = q.front();
        q.pop();
        for (auto i : v[now])
        {
            if (visit[i]) continue;
            visit[i] = 1;
            q.push(i);
            wa[i] = now;
        }
    }
}

int main()
{
    int a, b, n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &a, &b);
        v[a].push_back(b);
        v[b].push_back(a);
    }
    bfs(1);
    for (int i = 2; i <= n; i++)
    {
        printf("%d\n", wa[i]);
    }
    return 0;
}