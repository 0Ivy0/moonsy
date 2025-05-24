#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n, k, s, e;
    long long sum = 0, plus, yaho = 0;
    string str;
    cin >> n >> k >> str;
    s = 0;
    e = n - 1;
    for (int i = 0; i < k; i++)
    {
        while (s < e && str[s] != 'C')
        {
            s++;
        }
        while (s < e && str[e] != 'P')
        {
            e--;
        }
        if (s >= e) break;
        swap(str[s], str[e]);
    }
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'P') plus = 1;
        else plus = 0;
        sum += plus;
        if (str[i] == 'C' && i >= 2)
        {
            yaho += sum * (sum - 1) / 2;
        }
    }
    cout << yaho;
}