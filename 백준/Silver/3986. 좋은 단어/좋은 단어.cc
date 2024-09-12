#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int n, cnt = 0;
    string str;
    stack<char> s;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        for (int j = 0; j < str.size(); j++)
        {
            if (!s.empty())
            {
                if (s.top() == str[j])
                {
                    s.pop();
                }
                else
                {
                    s.push(str[j]);
                }
            }
            else
            {
                s.push(str[j]);
            }
        }
        if (s.empty())
        {
            cnt++;
        }
        while (!s.empty())
        {
            s.pop();
        }
    }
    cout << cnt;
}