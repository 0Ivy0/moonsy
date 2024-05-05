#include <stdio.h>

int arr[10000] = {0};

int main()
{
    int n, i, j, t;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &t);
        arr[t - 1]++;
    }
    for (i = 0; i < 10000; i++)
    {
        if (arr[i] != 0)
        {
            for (j = 0; j < arr[i]; j++)
                printf("%d\n", i + 1);
        }
    }
}