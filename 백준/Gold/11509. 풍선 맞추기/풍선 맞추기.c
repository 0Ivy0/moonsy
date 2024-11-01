#include <stdio.h>

int arrow[1000001];

int main()
{
    int a, n, s = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        if (arrow[a])
        {
            arrow[a]--;
            arrow[a - 1]++;
        }
        else
        {
            arrow[a - 1]++;
            s++;
        }
    }
    printf("%d", s);
    return 0;
}