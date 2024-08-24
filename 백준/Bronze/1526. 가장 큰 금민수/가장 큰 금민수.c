#include <stdio.h>

int main()
{
    int f = 0;
    long long int n, i, save;
    scanf("%lld", &n);
    while (1)
    {
        save = n;
        for (i = 0; save != 0; save /= 10)
        {
            if (save % 10 != 7 && save % 10 != 4) break;
        }
        if (save == 0) break;
        n--;
    }
    printf("%lld", n);
    return 0;
}