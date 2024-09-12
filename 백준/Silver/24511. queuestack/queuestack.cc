#include <iostream>
#include <queue>
#include <stack>

using namespace std;

long long int wa[100001], arr[100001];

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long int n, num, i, j;
    queue<int> q;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> wa[i];
    }
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = n - 1; i >= 0; i--)
    {
        if (wa[i] == 1) continue;
        q.push(arr[i]);
    }
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> num;
        if (q.empty()) cout << num << " ";
        else
        {
            q.push(num);
            cout << q.front() << " ";
            q.pop();
        }
    }
}