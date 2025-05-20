#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n, cnt = 0, arr[4], save;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i <= 99)
        {
            cnt++;
            continue;
        }
        if (i == 1000) continue;
        save = i;
        for (int j = 0; j < 3; j++)
        {
            arr[j] = save % 10;
            save /= 10;
        }
        if (arr[0] - arr[1] == arr[1] - arr[2]) cnt++;
    }
    cout << cnt;
}