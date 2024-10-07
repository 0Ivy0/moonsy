#include <iostream>

using namespace std;

int main()
{
    long long int wa = 0, waa = 1;
    char str[51];
    int n;
    cin >> n >> str;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            waa = (waa * 31) % 1234567891;
        }
        wa += ((str[i] - 'a' + 1) * waa) % 1234567891;
        waa = 1;
    }
    cout << wa % 1234567891;
}