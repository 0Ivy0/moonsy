#include <stdio.h>

int main()
{
    int i, n, ocean;
    long long int arr[101] = {1,1,1,2,2};
    scanf("%d", &n);
    for (i = 5; i < 100; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 5];
    }
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ocean);
        printf("%lld\n", arr[ocean - 1]);
    }
    return 0;
}