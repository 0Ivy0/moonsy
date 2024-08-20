#include <stdio.h>

int main()
{
    int n, k, i, s, y, arr[13], room = 0;
    scanf("%d %d", &n, &k);
    for (i = 0; i < 13; i++) arr[i] = '\0';
    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &y, &s);
        arr[(s - 1) * 2 + y]++;
    }
    for (i = 0; i < 12; i++)
    {
        if (arr[i])
        {
            room += arr[i] / k;
            if (arr[i] % k != 0) room++;
        }
    }
    printf("%d", room);
    return 0;
}