#include <stdio.h>

int main()
{
    int arr[1000] = {0};
    int n, i, j, min_num = 0, tmp;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        min_num = i;
        for (j = i; j < n; j++)
        {
            if (arr[j] < arr[min_num])
            {
                min_num = j;
            }
        }
        tmp = arr[min_num];
        arr[min_num] = arr[i];
        arr[i] = tmp;
    }
    for (i = 0; i < n; i++)
        printf("%d\n", arr[i]);
}