#include <stdio.h>

int main()
{
    int n, arr[11], i = 0, save, s, tmp;
    scanf("%d", &n);
    while (n != 0)
    {
        arr[i] = n % 10;
        n /= 10;
        i++;
    }
    for (int j = 0; j < i; j++)
    {
        save = arr[j];
        s = j;
        for (int k = j; k < i; k++)
        {
            if (arr[k] > arr[s])
            {
                save = arr[k];
                s = k;
            }
        }
        tmp = arr[j];
        arr[j] = arr[s];
        arr[s] = tmp;
        printf("%d", arr[j]);
    }
    return 0;
}