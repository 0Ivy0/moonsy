#include <iostream>
#include <queue>

using namespace std;

queue<int>thi, fort;

char arr[1001][1001];
int cnt[1001][1001], safe = 1, n, m;

void dfs(int a, int b)
{
    thi.push(a);
    fort.push(b);
    while (!thi.empty())
    {
        a = thi.front();
        b = fort.front();
        thi.pop();
        fort.pop();
        if (cnt[a][b]) continue;
        if (a + 1 < n && arr[a + 1][b] == 'U')
        {
            thi.push(a + 1);
            fort.push(b);
        }
        if (a - 1 >= 0 && arr[a - 1][b] == 'D')
        {
            thi.push(a - 1);
            fort.push(b);
        }
        if (b + 1 < m && arr[a][b + 1] == 'L')
        {
            thi.push(a);
            fort.push(b + 1);
        }
        if (b - 1 >= 0 && arr[a][b - 1] == 'R')
        {
            thi.push(a);
            fort.push(b - 1);
        }
        if (arr[a][b] == 'U')
        {
            thi.push(a - 1);
            fort.push(b);
        }
        if (arr[a][b] == 'D')
        {
            thi.push(a + 1);
            fort.push(b);
        }
        if (arr[a][b] == 'L')
        {
            thi.push(a);
            fort.push(b - 1);
        }
        if (arr[a][b] == 'R')
        {
            thi.push(a);
            fort.push(b + 1);
        }
        cnt[a][b] = safe;
    }
}

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (cnt[i][j] == 0)
            {
                dfs(i, j);
                safe++;
            }
        }
    }
    cout << safe - 1;
}