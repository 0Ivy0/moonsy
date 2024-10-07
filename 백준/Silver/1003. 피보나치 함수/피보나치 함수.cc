#include <iostream>

using namespace std;

long long int dp_zero[41], dp_one[41];

int main()
{
    int n, num;
    cin >> n;
    dp_zero[0] = 1;
    dp_one[0] = 0;
    dp_zero[1] = 0;
    dp_one[1] = 1;
    dp_zero[2] = 1;
    dp_one[2] = 1;
    for (int i = 3; i < 41; i++)
    {
        dp_zero[i] += dp_zero[i - 1] + dp_zero[i - 2];
        dp_one[i] += dp_one[i - 1] + dp_one[i - 2];
    }
    while(n--)
    {
        cin >> num;
        printf("%d %d\n", dp_zero[num], dp_one[num]);
    }
}