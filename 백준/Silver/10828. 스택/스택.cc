#include <iostream>
#include <stack>

using namespace std;

int main()
{
    string str;
    int n, num;
    cin >> n;
    stack <int> s;
    while (n--)
    {
        cin >> str;
        if (str == "push")
        {
            cin >> num;
            s.push(num);
        }
        if (str == "pop")
        {
            if (s.empty()) cout << "-1\n";
            else
            {
                cout << s.top() << "\n";
                s.pop();
            }
        }
        if (str == "size") cout << s.size() << "\n";
        if (str == "empty")
        {
            if (s.empty()) cout << "1\n";
            else cout << "0\n";
        }
        if (str == "top")
        {
            if (!s.empty()) cout << s.top() << "\n";
            else cout << "-1\n";
        }
    }
}