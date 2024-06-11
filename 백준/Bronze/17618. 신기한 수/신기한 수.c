#include <stdio.h>

int main()
{
    int n, s = 0, sum = 0, len, i, j, k;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        j = i;
        s = 0;
        while (j != 0)
        {
            s += j % 10;
            j /= 10;
        }
        if (i % s == 0) sum++;
    }
    printf("%d", sum);
}