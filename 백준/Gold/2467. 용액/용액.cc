#include <stdio.h>
#include <stdlib.h>

int arr[100000];

int main()
{
    int n, f = 0, e, save1, save2, yaho, yaho_save;
    scanf("%d", &n);
    e = n - 1;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    save1 = arr[f];
    save2 = arr[e];
    yaho_save = arr[f] + arr[e];
    while (f<e)
    {
        if (f == e) break;
        yaho = arr[f] + arr[e];
        if (abs(yaho_save) >= abs(yaho))
        {
            yaho_save = yaho;
            save1 = arr[f];
            save2 = arr[e];
        }
        if (yaho < 0) f++;
        else if (yaho >= 0) e--;
        
        
    }
    printf("%d %d", save1, save2);
    return 0;
}