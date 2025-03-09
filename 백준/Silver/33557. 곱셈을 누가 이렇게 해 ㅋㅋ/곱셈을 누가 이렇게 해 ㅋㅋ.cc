#include <iostream>

using namespace std;

int main()
{
    int t, a, b, plus, tmp, ten, multi;
    cin >> t;
    for (int i = 0 ; i < t; i++)
    {
        plus = 0;
        ten = 1;
        cin >> a >> b;
        if (max(a, b) == b)
        {
            tmp = a;
            a = b;
            b = tmp;
        }
        multi = a * b;
        for (; a != 0;)
        {
            if (b == 0) b = 1;
            plus += ((a % 10) * (b % 10)) * ten;
            if ((a % 10) * (b % 10) >= 10) ten *= 100;
            else ten *= 10;
            a /= 10;
            b /= 10;
        }
        if (plus == multi) cout << "1\n";
        else cout << "0\n";
    }
    return 0;
}