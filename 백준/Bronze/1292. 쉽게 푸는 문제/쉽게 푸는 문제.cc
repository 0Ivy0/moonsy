#include <stdio.h>
#include <string.h>

int main()
{
    int a, b, i, j, s = 0, n = 0, f = 0, arr[1001];
    scanf("%d %d", &a, &b);
    for (i = 1; i < 500; i++)
    {
        for (j = 0; j < i; j++)
        {
            arr[n] = i;
            n++;
            if (n == 1001)
            {
                f = 1;
                break;
            }
        }
        if (f == 1) break;
    }
    for (i = a - 1; i < b; i++)
    {
        s += arr[i];
    }
    printf("%d", s);
    return 0;
}