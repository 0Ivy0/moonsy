#include <stdio.h>
#include <string.h>

int main()
{
    char str[101], mobis[6] = {'M','O','B','I','S','\0'}, wa[6] = {'0','0','0','0','0','\0'};
    int len, i, j;
    scanf("%s", str);
    len = strlen(str);
    
    for (i = 0; i < len; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (str[i] == mobis[j])
            {
                mobis[j] = '0';
                break;
            }
        }
    }
    if (strcmp(mobis, wa) == 0)
    {
        printf("YES");
        return 0;
    }
    printf("NO");
    return 0;
}