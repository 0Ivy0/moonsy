#include <stdio.h>

int arr[1000001];

int main()
{
    long long int cnt = 0;
    int i, n, b, c; 
    scanf("%d", &n);
    cnt += n;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d %d", &b, &c);
    for (i = 0; i < n; i++)
    {
        arr[i] -= b;
        if (arr[i] > 0)
        {
            cnt += arr[i] / c;
            if (arr[i] % c != 0) cnt++;
        }
    }
    printf("%lld", cnt);
    return 0;
}