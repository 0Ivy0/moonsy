#include <stdio.h>

int main()
{
    int a, b, s = 0, save = 0, wa = 1;
    scanf("%d %d", &a, &b);
    for (int j = 1; j <= 100; j++)
    {
        if (a < j * j)
        {
            wa = j;
            break;
        }
        else if (a == j * j)
        {
            wa = j;
            break;
        }
    }
    for (int i = a; i <= b; i++)
    {
        if (wa * wa == i)
        {
            if (save == 0) save = wa * wa;
            s += wa * wa;
            wa++;
        }
    }
    if (save == 0) printf("-1");
    else printf("%d\n%d", s, save);
    return 0;
}