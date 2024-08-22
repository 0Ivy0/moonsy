#include <stdio.h>

int main()
{
    int t, n, i;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d", &n);
        printf("%d %d\n", n, n);
    }
    return 0;
}