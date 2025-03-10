#include <iostream>
#include <stack>

using namespace std;

stack<char>s;

int main()
{
    bool f;
    string str;
    getline(cin, str);
    while (str != ".")
    {
        for (int i = 0; str[i] != '.'; i++)
        {
            if (str[i] == '(' || str[i] == '[') s.push(str[i]);
            else if (str[i] == ')')
            {
                if (s.empty())
                {
                    f = 1;
                    break;
                }
                else if (s.top() == '(')
                {
                    s.pop();
                }
                else 
                {
                    f = 1;
                    break;
                }
            }
            else if (str[i] == ']')
            {
                if (s.empty())
                {
                    f = 1;
                    break;
                }
                else if (s.top() == '[') s.pop();
                else 
                {
                    f = 1;
                    break;
                }
            }
        }
        if (f == 1 || !s.empty()) cout << "no\n";
        else cout << "yes\n";
        while (!s.empty()) s.pop();
        f = 0;
        getline(cin, str);
    } 
    return 0;
}