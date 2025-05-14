#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

struct Tree
{
    int n;
    double A;
    double B;
};

struct Distance
{
    int A;
    int B;
    double distance;
};

int arr[10001], n;
Tree yaho[101];
Distance dis[10001];

void dist()
{
    int p = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            dis[p].A = i;
            dis[p].B = j;
            dis[p].distance = sqrt(pow(abs(yaho[i].A - yaho[j].A), 2) + pow(abs(yaho[i].B - yaho[j].B), 2));
            p++;
        }
    }
}

double compare(Distance a, Distance b)
{
    return a.distance < b.distance;
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
    int check = 0, p = 0;
    double w = 0;
    while (check != n - 1)
    {
        if (find(dis[p].A) == find(dis[p].B))
        {
            p++;
            continue;
        }
        if (dis[p].A > dis[p].B)
        {
            arr[find(dis[p].A)] = arr[dis[p].B];
        }
        else
        {
            arr[find(dis[p].B)] = arr[dis[p].A];
        }
        w += dis[p].distance;
        check++;
        p++;
    }
    cout << fixed;
    cout.precision(2);
    cout << w;
}

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    double a, b;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        arr[i] = i;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        yaho[i].n = i;
        yaho[i].A = a;
        yaho[i].B = b;
    }
    dist();
    sort(dis, dis + (n * (n - 1) / 2), compare);
    onion();
}