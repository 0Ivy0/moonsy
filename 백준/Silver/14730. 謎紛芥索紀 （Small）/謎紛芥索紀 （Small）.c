#include <stdio.h>

int main()
{
    int n, c, k, i, s = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &c, &k);
        s += c * k;
    }
    printf("%d", s);
    return 0;
}