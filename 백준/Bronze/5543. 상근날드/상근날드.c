#include <stdio.h>

int main()
{
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    if (b < c && b < a) a = b;
    if (c < b && c < a) a = c;
    if (b == c && b < a) a = b;
    if (e < d) d = e;
    printf("%d", a + d - 50);
    return 0;
}