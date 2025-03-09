#include <iostream>
#include <vector>

using namespace std;

int arr[2000001];
vector<long long int>v;

void ertos(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        for (int j = i * i; j <= n; j += i)
        {
            arr[j] = 1;
        }
    }
    for (int i = 2; i <= 2000000; i++)
    {
        if (arr[i] == 0) v.push_back(i);
    }
}

int main()
{
    long long int t, n;
    bool f;
    cin >> t;
    ertos(2000000);
    for (int i = 0; i < t; i++)
    {
        f = 0;
        cin >> n;
        for (int j = 0; j <= v.size(); j++)
        {
            if (v[j] >= n)
            {
                f = 1;
                cout << v[j] << '\n';
                break;
            }
        }
        while (f == 0)
        {
            int f2 = 0;
            for (int i = 0; v[i] * v[i] <= n; i++)
            {
                if (n % v[i] == 0)
                {
                    n++;
                    f2 = 1;
                    break;
                }
            }
            if (f2 == 1) continue;
            cout << n << '\n';
            f = 1;
        }
    }
    return 0;
}