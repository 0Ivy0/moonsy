#include <stdio.h>

int main()
{
    int n, k, i, j, save, cnt1 = 0, cnt2 = 1, arr[1002];
    scanf("%d %d", &n, &k);
    for (i = 1; i <= n; i++)
    {
        arr[i] = i;
    }
    save = k;
    printf("<");
    while (cnt2 != n)
    {
        cnt1 = 0;
        printf("%d, ", arr[save]);
        arr[save] = 0;
        cnt2++;
        while (cnt1 != k)
        {
            if (save > n - 1) save -= n;
            save += 1;
            if (arr[save] == 0) continue;
            cnt1++;
        }
    }
    printf("%d>", arr[save]);
    return 0;
}