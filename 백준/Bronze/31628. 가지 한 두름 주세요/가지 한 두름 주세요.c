#include <stdio.h>
#include <string.h>

int main()
{
    char str[11][11][9];
    int i, j, k, cnt1 = 0, cnt2 = 0;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            scanf("%s", str[i][j]);
        }
    }
    for (i = 0; i < 10; i++)
    {
        cnt1 = 0;
        cnt2 = 0;
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < strlen(str[i][j]); k++)
            {
                //printf("%c %c\n", str[i][j][k], str[j][i][k]);
                if (str[0][i][k] == str[j][i][k]) cnt1++;
                if (str[i][0][k] == str[i][j][k]) cnt2++;
            }
            //printf("%d %d\n", cnt1, cnt2);
            if (cnt1 == strlen(str[i][j]) * 10)
            {
                printf("1");
                return 0;
            }
            if (cnt2 == strlen(str[i][j]) * 10)
            {
                printf("1");
                return 0;
            }
        }
    }
    printf("0");
    return 0;
}