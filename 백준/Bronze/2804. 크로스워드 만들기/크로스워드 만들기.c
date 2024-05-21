#include <stdio.h>
#include <string.h>

int main()
{
    char str1[31], str2[31];
    int len1, len2, i, j, save1, save2, a = 0, b = 0, f = 0;
    scanf("%s %s", str1, str2);
    len1 = strlen(str1);
    len2 = strlen(str2);

    for (i = 0; i < len1; i++)
    {
        for (j = 0; j < len2; j++)
        {
            if (str1[i] == str2[j])
            {
                save1 = i;
                save2 = j;
                f = 1;
                break;
            }
        }
        if (f == 1) break;
    }
    for (i = 0; i < len2; i++)
    {
        for (j = 0; j < len1; j++)
        {
            if (save1 == j)
            {
                printf("%c", str2[a]);
                if (save2 == i) b++;
                a++;
            }
            else if (save2 == i)
            {
                printf("%c", str1[b]);
                b++;
            }
            else printf(".");
        }
        printf("\n");
    }
    
    return 0;
}