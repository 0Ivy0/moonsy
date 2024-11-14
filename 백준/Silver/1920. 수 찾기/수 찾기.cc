#include <iostream>
#include <algorithm>

using namespace std;

int arr1[100000], arr2[100000], n, m;

int bin(int goal);

int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    sort(arr1, arr1 + n);
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
        if (bin(arr2[i]) == 1) printf("1\n");
        else printf("0\n");
    }
    return 0;
}

int bin(int goal)
{
    int low = 0, high = n - 1, mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr1[mid] > goal)
        {
            high = mid - 1;
        }
        else if (arr1[mid] < goal)
        {
            low = mid + 1;
        }
        else return 1;
    }
    return 0;
}