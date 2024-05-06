#include <stdio.h>

int p(int a)
{
    int i, s = 1;
    for (i = 2; i <= a; i++)
    {
        s *= i;
    }
    return s;
}

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    printf("%d", p(n) / p(n-k) / p(k));

    return 0;
}