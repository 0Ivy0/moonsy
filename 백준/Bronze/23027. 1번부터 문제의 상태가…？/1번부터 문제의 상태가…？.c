#include <stdio.h>
#include <string.h>

int main()
{
    char str[1001], al[6] = {'A','B','C','D','F'};
    int len, i, j, k, f = 0;
    scanf("%s", str);
    len = strlen(str);

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < len; j++)
        {
            if (str[j] == al[i])
            {
                f = 1;
                break;
            }
        }
        if (f == 1) break;
    }
    if (f == 1)
    {
        for (j = 0; j < len; j++)
        {
            for (k = i; k < 5; k++)
            {
                if (str[j] == al[k])
                {
                    str[j] = al[i];
                }
            }
            
        }
    }
    if (f == 0)
    {
        for (j = 0; j < len; j++)
        {
            printf("A");
        }
        return 0;
    }
    printf("%s", str);
    return 0;
}