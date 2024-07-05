#include <stdio.h>
#include <string.h>

int arr[2000001];

int main()
{
    int t, i, j, n;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d", &n);
        arr[n + 1000000] = 1;
    }
    for (i = 0; i < 2000001; i++)
    {
        if (arr[i])
        {
            printf("%d\n", i - 1000000);
        }
    }
    return 0;
}