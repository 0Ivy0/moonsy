#include <stdio.h>

int main()
{
    int n1, n2, i, cnt = 1;
    scanf("%d %d", &n1, &n2);
    for (i = 1; i <= n1; i++)
    {
        if (n1 % i == 0)
        {
            if (cnt == n2)
            {
                printf("%d", i);
                return 0;
            }
            cnt++;
        }
    }
    printf("0");
    return 0;
}