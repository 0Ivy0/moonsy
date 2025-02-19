#include <stdio.h>

int main()
{
    int t, n, yaho = 0;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        for (int j = 0; j < n; j++)
        {
            if (j % 2 == 0) yaho++;
            else yaho += 3;
        }
        printf("%d\n", yaho);
        yaho = 0;
    }
    return 0;
}