#include <stdio.h>

int arr[500001] = {1, 1};

int p(int n);

int main()
{
    int n, wa;
    scanf("%d", &n);
    wa = p(n);
    printf("%d\n", wa - 1);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

int p(int n)
{
    int yaho = 2;
    for (int i = 2; i <= n; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = i; j <= n; j += i)
            {
                arr[j] = yaho;
            }
            yaho++;
        }
    }
    return yaho;
}