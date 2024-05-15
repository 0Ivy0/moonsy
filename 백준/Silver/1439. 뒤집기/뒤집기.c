#include <stdio.h>
#include <string.h>

char zero_one[1000000];

int main()
{
    int i, len, cnt1 = 0, cnt0 = 0, f;
    scanf("%s", zero_one);
    len = strlen(zero_one);

    if (zero_one[0] == '0')
    {
        cnt1++;
        f = 0;
    }
    else
    {
        cnt0++;
        f = 1;
    }

    for (i = 1; i < len; i++)
    {
        if (i == 0) f = zero_one[i] - '0';
        if (zero_one[i] == '1')
        {
            if (f == 0)
                cnt0++;
            f = 1;
        }
        else
        {
            if (f == 1)
                cnt1++;
            f = 0;
        }
    }
    if (cnt1 > cnt0)
        cnt1 = cnt0;

    printf("%d", cnt1);
    return 0;
}