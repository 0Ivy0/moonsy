#include <stdio.h>
#include <string.h>

int main()
{
    char str[51];
    int len, i, cnt = 0;
    gets(str);
    len = strlen(str);
    if (len == 1)
    {
        printf("CE");
        return 0;
    }
if (str[0] == '"' && str[strlen(str) - 1] == '"')
    {
        if (len == 2)
        {
            printf("CE");
            return 0;
        }
        for (i = 1; i < len - 1; i++)
        {
            if (str[i] == ' ')
            {
                cnt++;
            }
            if (cnt == len - 2)
            {
                printf("CE");
                return 0;
            }
        }
        for (i = 0; i < len; i++)
        {
            if (str[i] != '"')
                printf("%c", str[i]);
        }
    }
    else printf("CE");
    return 0;
}