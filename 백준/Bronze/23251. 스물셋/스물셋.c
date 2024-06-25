#include <stdio.h>
#include <string.h>

int main()
{
    int num, n, i, j, wa = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num);
        for (j = 0; j < num; j++)
        {
            wa += 23;
        }
        printf("%d\n", wa);
        wa = 0;
    }
    return 0;
}