#include <stdio.h>

int main()
{
    int num, n, i, j, k, f, cnt1 = 0, cnt2 = 0;
    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {
        scanf("%d", &n);
        f = 1;
        for (j = 2; j <= n - j; j++)
        {
            cnt1 = 0;
            cnt2 = 0;
            for (k = 2; k < j; k++)
            {
                if (j % k == 0) cnt1++;
            }
            for (k = 2; k < n - j; k++)
            {
                if ((n - j) % k == 0) cnt2++;
            }
            if (cnt1 == 0 && cnt2 == 0)
            {
                printf("Yes\n");
                f = 0;
                break;
            }
        }
        if (f == 1) printf("No\n");
    }
    return 0;
}