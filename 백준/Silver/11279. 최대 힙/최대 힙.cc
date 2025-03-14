#include <iostream>
#include <queue>
#include <vector>

using namespace std;

priority_queue<int>pq;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n, x;
    cin >> n;
    while (n--)
    {
        cin >> x;
        if (x == 0)
        {
            if (pq.empty())
            {
                cout << "0\n";
                continue;
            }
            else cout << pq.top() << "\n";
            pq.pop();
        }
        else pq.push(x);
    }
}