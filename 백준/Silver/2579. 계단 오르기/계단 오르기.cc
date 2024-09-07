#include <iostream>

using namespace std;

int main(){
    int t, n[301], dp[301];
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> n[i];
    }
    dp[0] = 0;
    dp[1] = n[1];
    dp[2] = n[1] + n[2];
    for (int i = 3; i <= t; i++)
    {
        dp[i] = max(dp[i - 3] + n[i - 1] + n[i], dp[i - 2] + n[i]);
    }
    printf("%d", dp[t]);
}