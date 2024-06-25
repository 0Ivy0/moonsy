#include <stdio.h>

int main()
{
    int a, t, f, save = 4, pre = 0;
    scanf("%d %d %d", &a, &t, &f);
    while (save < t)
    {
        t -= save;//3
        pre += save * 2;//8
        save++;//5
    }
    if (t == 1)
    {
        if (f == 0) pre += 0;
        else pre += 1;
    }
    else if (t == 2)
    {
        if (f == 0) pre += 2;
        else pre += 3;
    }
    else
    {
        pre += 3;
        save -= 2;
        t -= 2;
        if (f == 0)
        {
            pre += t;
        }
        else
        {
            pre += t + save;
        }
    }
    if (pre >= a) pre -= pre / a * a;
    printf("%d", pre);
    return 0;
}//7