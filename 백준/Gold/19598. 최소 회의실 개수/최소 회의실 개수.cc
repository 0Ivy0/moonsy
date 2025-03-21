#include <iostream>
#include <queue>
#include <vector>

using namespace std;

priority_queue<int,vector<int>,greater<int>>s;
priority_queue<int,vector<int>,greater<int>>e;

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n, a, b, big = 0, cnt = 0;
    cin >> n;
    while (n--)
    {
        cin >> a >> b;
        s.push(a);
        e.push(b);
    }
    while (s.size() != 0 && e.size() != 0)
    {
        if (s.top() >= e.top())
        {
            cnt--;
            e.pop();
        }
        else
        {
            s.pop();
            cnt++;
        }
        if (cnt > big) big = cnt;
    }
    cout << big;
}