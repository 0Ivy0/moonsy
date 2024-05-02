#include <stdio.h>
#include <string.h>

int main()
{
    char arr[1000];
    int n, i, len;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%s", arr);
        len = strlen(arr);
        printf("%c%c\n", arr[0], arr[len - 1]);
    }
}