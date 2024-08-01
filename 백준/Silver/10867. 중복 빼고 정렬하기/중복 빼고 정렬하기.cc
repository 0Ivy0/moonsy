#include <stdio.h>
#include <algorithm>

using namespace std;

int arr[100001];

int main()
{
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    sort(arr, arr + n);
    printf("%d ", arr[0]);
    for (i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1]) continue;
        printf("%d ", arr[i]);
    }
    return 0;
}