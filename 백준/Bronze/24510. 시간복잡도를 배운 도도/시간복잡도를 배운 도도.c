#include <stdio.h>
#include <string.h>

int main()
{
    char str[10001];
    int n, max = 0, i, j, len, s = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%s", str);
        len = strlen(str);
        for (j = 0; j < len; j++)
        {
            if (str[j] == 'f' && str[j + 1] == 'o' && str[j + 2] == 'r' && str[j + 2])
            {
                s++;
            }
            if (str[j] == 'w' && str[j + 1] == 'h' && str[j + 2] == 'i' && str[j + 3] == 'l' && str[j + 4] == 'e' && str[j + 4])
            {
                s++;
            }
        }
        if (max < s)
        {
            max = s;
        }
        s = 0;
    }
    printf("%d", max);
    return 0;
}