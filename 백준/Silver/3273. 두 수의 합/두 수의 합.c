#include <stdio.h>

long long int arr[2000001];

int main()
{
    long long int n, num, i, x, max = 0, cnt = 0, save;
    scanf("%lld", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%lld", &num);
        arr[num]++;
        if (max < num) max = num;
    }
    scanf("%lld", &x);
    for (i = 1; i <= max; i++)
    {
        if (x - i >= 0 && arr[i] && arr[x - i])
        {
            if (arr[i] < arr[x - i]) save = arr[x - i];
            else save = arr[i];
            cnt += save;
        }
    }
    printf("%lld", cnt / 2);
    return 0;
}