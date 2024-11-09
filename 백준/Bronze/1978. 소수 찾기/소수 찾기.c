#include <stdio.h>

int main()
{
    int n, i, j, num, count = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num);
        for (j = 2; j <= num; j++)
        {
            if (num == 2)
            {
                count += 1;
            }
            if (num % j == 0)
            {
                break;
            }
            if (j == num - 1)
            {
                count += 1;
            }
        }
    }
    printf("%d", count);
}