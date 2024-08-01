#include <stdio.h>

int main()
{
    int arr[11], i, s = 0, f = 0;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        if (f == 1) continue;
        s += arr[i];
        if (s >= 100)
        {
            if (s == 100) s = 100;
            else if (100 - (s - arr[i]) < s - 100) s -= arr[i];
            f = 1;
        }
    }
    printf("%d", s);
    return 0;
}