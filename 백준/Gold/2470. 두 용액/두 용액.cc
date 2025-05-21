#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int arr[100001];

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n, sum = 0, s, e, save1, save2, sum_save;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    s = 0;
    e = n - 1;
    sum_save = arr[s] + arr[e];
    save1 = arr[s];
    save2 = arr[e];
    while (s != e)
    {
        sum = arr[s] + arr[e];
        if (abs(sum_save) > abs(sum))
        {
            save1 = arr[s];
            save2 = arr[e];
            sum_save = sum;
        }
        if (sum < 0)
        {
            s++;
        }
        else
        {
            e--;
        }
    }
    cout << save1 << " " << save2;
}