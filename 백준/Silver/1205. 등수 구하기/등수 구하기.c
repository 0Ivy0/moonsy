#include <stdio.h>

int main()
{
    int n, p, i, f = 0;
    long long int new_s, sco = -1, cnt = 1, same = 0;
    scanf("%d %lld %d", &n, &new_s, &p);
    for (i = 0; i < n; i++)
    {
        scanf("%lld", &sco);
        if (new_s < sco) cnt++;
        if (new_s == sco) same++;
    }
    if (sco == -1)
    {
        printf("1");
        return 0;
    }
    if (cnt + same - 1 >= p) printf("-1");
    else printf("%d", cnt);
    return 0;
}