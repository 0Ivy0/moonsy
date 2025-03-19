#include <iostream>

using namespace std;

int arr[1000001];

int findd(int a)
{
    if (arr[a] == a) return a;
    else return arr[a] = findd(arr[a]);
}

void onion(int a, int b)
{
    if (arr[findd(a)] > arr[findd(b)]) arr[findd(b)] = arr[findd(a)];
    else arr[findd(a)] = arr[findd(b)];
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, m, a, b, cal;
    cin >> n >> m;
    for (int i = 0; i <= 1000000; i++)
    {
        arr[i] = i;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> cal >> a >> b;
        if (cal == 0) onion(a, b);
        else
        {
            if (findd(a) == findd(b))
            {
                cout << "YES\n";
            }
            else cout << "NO\n";
        }
    }
}