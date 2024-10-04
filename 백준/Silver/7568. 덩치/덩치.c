#include <stdio.h>
#include <string.h>

int main()
{
    int t, i, j, cnt, arr[51][201];
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d %d", &arr[i][0], &arr[i][1]);
    }
    for (i = 0; i < t; i++)
    {
        cnt = 1;
        for (j = 0; j < t; j++)
        {
            if (arr[i][0] < arr[j][0] && arr[i][1] < arr[j][1]) cnt++;
        }
        printf("%d ", cnt);
    }
    return 0;
}