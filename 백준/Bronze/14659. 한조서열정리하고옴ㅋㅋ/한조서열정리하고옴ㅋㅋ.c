#include <stdio.h>

long long int arr[30001];

int main()
{
    int n, i, j, cnt, save = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        cnt = 0;
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j]) break;
            if (arr[i] > arr[j]) cnt++;
        }
        if (save < cnt) save = cnt;
    }
    printf("%d", save);
    return 0;
}