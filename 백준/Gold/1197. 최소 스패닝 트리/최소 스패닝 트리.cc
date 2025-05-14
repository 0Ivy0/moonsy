#include <iostream>
#include <algorithm>

using namespace std;

struct Tree
{
    int tree;
    int A;
    int B;
};

int arr[10001], v, e;
Tree yaho[100001];

int compare(Tree a, Tree b)
{
    return a.tree < b.tree;
}

int find(int a)
{
    if (arr[a] == a)
    {
        return a;
    }
    else
    {
        return arr[a] = find(arr[a]);
    }
}

void onion()
{
    int check = 0, w = 0, p = 0;
    while (check != v - 1)
    {
        if (find(yaho[p].A) == find(yaho[p].B))
        {
            p++;
            continue;
        }
        if (yaho[p].A > yaho[p].B)
        {
            arr[find(yaho[p].A)] = arr[yaho[p].B];
        }
        else
        {
            arr[find(yaho[p].B)] = arr[yaho[p].A];
        }
        w += yaho[p].tree;
        check++;
        p++;
    }
    cout << w;
}

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int a, b, c;
    cin >> v >> e;
    for (int i = 0; i < v; i++)
    {
        arr[i] = i;
    }
    for (int i = 0; i < e; i++)
    {
        cin >> a >> b >> c;
        yaho[i].A = a;
        yaho[i].B = b;
        yaho[i].tree = c;
    }
    sort(yaho, yaho + e, compare);
    onion();
}