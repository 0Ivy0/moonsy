#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, a, b, arr[501], front, back, water = 0, cnt = 0, f = 0;
    scanf("%d %d", &a, &b);
    for (i = 0; i < b; i++)
    {
        scanf("%d", &arr[i]);
        cnt += arr[i];
    }
    for (i = 1; i <= a; i++)
    {
        f = 0;
        for (j = 0; j < b; j++)
        {
            if (arr[j] >= i)
            {
                f = 1;
                break;
            }
        }
        if (f == 0) continue;
        for (j = 0; ; j++)
        {
            if (arr[j] >= i)
            {
                front = j;
                break;
            }
        }
        for (j = 0; ; j++)
        {
            if (arr[b - j - 1] >= i)
            {
                back = b - j - 1;
                break;
            }
        }
        water += back - front + 1;
    }
    printf("%d", water - cnt);
    return 0;
}