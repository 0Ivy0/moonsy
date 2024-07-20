#include <stdio.h>

int main()
{
    int h, w, n, m, sn, sm, cnt = 0;
    scanf("%d %d %d %d", &h, &w, &n, &m);
    n++;
    m++;
    sn = h / n;
    sm = w / m;
    if (h % n != 0) sn++;
    if (w % m != 0) sm++;
    printf("%d", sn * sm);
    return 0;
}