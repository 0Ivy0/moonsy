#include <stdio.h>
#include <string.h>

int main()
{
    int t, i, j, p, len, index = 0;
    char str[1001], save[21];
    scanf("%d", &t);
    for (j = 0; j < 1000; j++) str[j] = '\0';
    for (j = 0; j < 20; j++) save[j] = '\0';
    getchar();
    for (i = 0; i < t; i++)
    {
        gets(str);
        len = strlen(str);
        for (j = 0; j < len; j++)
        {
            if (str[j] != ' ')
            {
                save[index] = str[j];
                index++;
            }
            if (str[j] == ' ' || str[j+1] == '\0')
            {
                for (p = strlen(save) - 1; p >= 0; p--)
                {
                    printf("%c", save[p]);
                    save[p] = '\0';
                }
                printf(" ");
                index = 0;
            }
        }
        for (j = 0; j < len; j++) str[j] = '\0';
        printf("\n");
    }
    return 0;
}