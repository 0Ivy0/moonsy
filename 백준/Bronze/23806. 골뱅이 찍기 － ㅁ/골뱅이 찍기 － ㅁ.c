#include <stdio.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);

    for (i = 0; i < 5 * n; i++)
    {
        for (j = 0; j < 5 * n; j++)
        {
            if (i > n - 1 && j > n - 1 && i < 5 * n - n && j < n * 5 - n) printf(" ");
            else printf("@");
        }
        printf("\n");
    }
}