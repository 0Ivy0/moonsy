#include <iostream>
#include <queue>

using namespace std;

queue<int>q;
int name_len[21];

int main()
{
    string name;
    long long int n, k, fri = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> name;
        name_len[name.size()]++;
        q.push(name.size());
        if (q.size() == k + 1)
        {
            if (name_len[q.front()] >= 2) fri += name_len[q.front()] - 1;
            if (name_len[q.front()]) name_len[q.front()]--;
            q.pop();
        }
        
    }
    while (!q.empty())
    {
        if (name_len[q.front()] >= 2) fri += name_len[q.front()] - 1;
        if (name_len[q.front()]) name_len[q.front()]--;
        q.pop();
    }
    cout << fri;
    return 0;
}