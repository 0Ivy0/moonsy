#include <stdio.h>
#include <string.h>

int main()
{
    char str[256] = {0,}, gather[11] = {'a','e','o','u','i','A','E','O','U','I'};
    int len, i, j, cnt;
    while (1)
    {
        cnt = 0;
        gets(str);
        len = strlen(str);
        if (strcmp(str, "#") == 0)
            break;
        for (i = 0; i < len; i++)
        {
            for (j = 0; j < 10; j++)
            {
                if (str[i] == gather[j])
                {
                    cnt++;
                    break;
                } 
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}