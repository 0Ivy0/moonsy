#include <stdio.h>
#include <string.h>

char str[500001];

int main()
{
    int i, len, f = 0;
    char save;
    scanf("%s", str);
    len = strlen(str);
    save = str[0];
    for (i = 1; i < len; i++)
    {
        if (save == str[i])
        {
            continue;
        }
        f = 1;
    }
    if (f == 0)
    {
        printf("-1");
        return 0;
    }
    for (i = 0; i < len / 2; i++)
    {
        if (str[i] == str[len - 1 - i])
        {
            continue;
        }
        printf("%d", len);
        return 0;
    }
    printf("%d", len - 1);
    return 0;
}
