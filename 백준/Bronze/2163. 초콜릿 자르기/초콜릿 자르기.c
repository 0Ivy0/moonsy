#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    printf("%d", (m - 1) * n + n - 1);
    return 0;
}