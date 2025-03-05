#include <stdio.h>

int main()
{
    int arr[10], arr2[10], sum, sum2 = 0, yaho = 0;
    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &arr2[i]);
    }
    sum = arr[0];
    if (sum > sum2) yaho = 1;
    for (int i = 1; i < 9; i++)
    {
        sum += arr[i];
        sum2 += arr2[i - 1];
        if (sum > sum2) yaho = 1;
    }
    sum2 += arr[8];
    if (sum > sum2) yaho = 1;
    if (yaho == 0) printf("No");
    else printf("Yes");
}