#include <stdio.h>

int arr[20000002];

int main()
{
    int n, num, m;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d", &num);
        arr[num + 10000000]++;
    }
    scanf("%d", &m);
    while (m--)
    {
        scanf("%d", &num);
        if (arr[num + 10000000]) printf("1 ");
        else printf("0 ");
    }
    return 0;
}