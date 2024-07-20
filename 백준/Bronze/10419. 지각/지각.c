#include <stdio.h>

int main()
{
    int t, d, i, j;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d", &d);
        for (j = 0; j < 10000; j++)
        {
            if ((j + 1) * (j + 2) > d) break;
        }
        printf("%d\n", j);
    }
    return 0;
}