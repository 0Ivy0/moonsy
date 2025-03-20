#include <iostream>

using namespace std;

int arr[1000001], cnt[1000001];

int findd(int a)
{
    if (arr[a] == a) return a;
    else return arr[a] = findd(arr[a]);
}

void onion(int a, int b)
{
    if (findd(a) > findd(b))
    {
        cnt[findd(b)] += cnt[findd(a)];
        arr[findd(a)] = findd(b);
    }
    else if (findd(a) < findd(b))
    {
        cnt[findd(a)] += cnt[findd(b)];
        arr[findd(b)] = findd(a);
    }
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string w;
    int n, a, b;
    cin >> n;
    for (int i = 1; i <= 1000000; i++)
    {
        arr[i] = i;
        cnt[i] = 1;
    }
    while (n--)
    {
        cin >> w;
        if (w == "I")
        {
            cin >> a >> b;
            onion(a, b);
        }
        else
        {
            cin >> a;
            cout << cnt[findd(a)] << "\n";
        }
    }
}