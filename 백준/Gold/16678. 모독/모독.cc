#include <stdio.h>
#include <algorithm>
#include <iostream>

using namespace std;

long long arr[1000001];

int main()
{
    long long n, i, a, cnt = 0, save = 0;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a;
        arr[i] = a;
    }
    sort(arr, arr + n);
    for (i = 0; i < n; i++)
    {
        if (save >= arr[i]) continue;
        save++;
        cnt += arr[i] - save;
    }
    printf("%lld", cnt);
    return 0;
}