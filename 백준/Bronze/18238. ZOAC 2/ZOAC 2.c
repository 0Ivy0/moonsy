#include <stdio.h>
#include <string.h>

int main()
{
    int i, len, num, t = 0;
    char str[101], save = 'A';
    scanf("%s", str);
    len = strlen(str);
    for (i = 0; i < len; i++)
    {
        if (str[i] - save > 13) num = -(str[i] - 26 - save);
        else if (str[i] - save > 0) num = str[i] - save;
        else if (str[i] - save > -13) num = save - str[i];
        else num = 26 + (str[i] - save);
        t += num;
        save = str[i];
    }
    printf("%d", t);
    return 0;
}