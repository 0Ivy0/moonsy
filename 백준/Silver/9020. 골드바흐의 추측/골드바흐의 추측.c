#include <stdio.h>

int arr[10001];

void p(int n);

int main()
{
    int n, num, s1, s2;
    p(10000);
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        for (int j = num / 2; j >= 2; j--)
        {
            if (!arr[j] && !arr[num - j])
            {
                printf("%d %d\n", j, num - j);
                break;
            }
        }
    }
    return 0;
}

void p(int n)
{
    for (int i = 4; i <= n; i += 2) arr[i] = 1;
    for (int i = 3; i * i <= n; i += 2)
    {
        if (arr[i] == 0)
        {
            for (int j = i * i; j <= n; j += i)
            {
                arr[j] = 1;
            }
        }
    }
}