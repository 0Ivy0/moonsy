#include <stdio.h>

int main()
{
    int n, k, m = -1, save = 0, arr[151];
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        save = arr[save];
        if (save == k)
        {
            m = i + 1;
            break;
        }
    }
    printf("%d", m);
    return 0;
}