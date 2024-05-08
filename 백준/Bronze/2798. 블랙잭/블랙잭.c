#include <stdio.h>

int main()
{
    int n, m, i, j, k, arr[101] = {0,}, black = 0, sum;
    scanf("%d %d", &n, &m);
    
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n - 2; i++)
    {
        for (j = 1 + i; j < n - 1; j++)
        {
            for (k = 1 + j; k < n; k++)
            {
                sum = arr[i] + arr[j] + arr[k];
                if (sum == m)
                {
                    printf("%d", sum);
                    return 0;
                }
                if (sum < m && m - sum < m - black)
                {
                    black = sum;
                }
            }
        }
    }
    printf("%d", black);

    return 0;
}