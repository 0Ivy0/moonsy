#include <stdio.h>

int main()
{
    int a, b, i, s;
    scanf("%d %d", &a, &b);
    if (a == b)
    {
        printf("1");
        return 0;
    }
    if (a > b)
    {
        printf("%d", a / b);
        a -= a / b * b;
    }
    else printf("0");
    if (a % b != 0) printf(".");
    for (i = 0; i < 1000; i++)
    {
        a *= 10;
        s = a / b;
        if (a % b == 0 && s == 0) break;
        printf("%d", s);
        a -= a / b * b;
    }
    return 0;
}