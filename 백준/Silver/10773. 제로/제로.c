#include <stdio.h>
#include <string.h>

int arr[100001];

int main()
{
    long long int s = 0;
    int t, i, j;
    scanf("%d", &t);
    for (i = 0, j = 0; i < t; i++, j++)
    {
        scanf("%d", &arr[j]);
        if (arr[j] == 0)
        {
            arr[j - 1] = '\0';
            j -= 2;
        }
    }
    for (i = 0; arr[i] != '\0'; i++)
    {
        s += arr[i];
    }
    printf("%lld", s);
    return 0;
}