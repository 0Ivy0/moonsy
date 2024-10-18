#include <stdio.h>

int arr[3000001], cnt = 0;

int p(int n);
void prime(int n);

int main()
{
    int n;
    scanf("%d", &n);
    prime(n);
    p(n);
    printf("%d", cnt);
    return 0;
}

void prime(int n)
{
    for (int i = 4; i <= n; i += 2) arr[i] = 1;
    for (int i = 3; i * i <= n; i += 2)
    {
        if (!arr[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                arr[j] = 1;
            }
        }
    }
}

int p(int n)
{
    if (n == 2 || n == 3)
    {
        cnt++;
        return 0;
    }
    n--;
    for (int i = n / 2; i >= 2; i--)
    {
        if (!arr[i] && !arr[n - i])
        {
            cnt++;
            p(i);
            p(n - i);
            break;
        }
    }
}