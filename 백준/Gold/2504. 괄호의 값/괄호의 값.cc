#include <iostream>

using namespace std;

int main()
{
    bool f = 0;
    int s = 0, plus, small = 0, big = 0;
    string str;
    cin >> str;
    for (int i = 0; i < str[i] != '\0'; i++)
    {
        if (str[i] == '(')
        {
            small++;
        }
        else if (str[i] == '[')
        {
            big++;
        }
        else if (str[i] == ')')
        {
            if (str[i - 1] == '(')
            {
                plus = 1;
                for (int j = 1; j <= small; j++)
                {
                    plus *= 2;
                }
                for (int j = 1; j <= big; j++)
                {
                    plus *= 3;
                }
                s += plus;
            }
            small--;
        }
        else if (str[i] == ']')
        {
            if (str[i - 1] == '[')
            {
                plus = 1;
                for (int j = 1; j <= small; j++)
                {
                    plus *= 2;
                }
                for (int j = 1; j <= big; j++)
                {
                    plus *= 3;
                }
                s += plus;
            }
            big--;
        }
        if (small < 0 || big < 0) f = 1;
        //cout << s << "\n";
    }
    if (small != 0 || big != 0) f = 1;
    if (f == 1) cout << 0;
    else cout << s;
}