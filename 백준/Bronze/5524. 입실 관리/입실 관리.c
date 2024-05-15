#include <stdio.h>
#include <string.h>

int main()
{
    char str[21] = {0,}, str1[21] = {0,};
    int n, i, j, len = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 21; j++)
        {
            str[j] = '\0';
            str1[j] = '\0';
        } 
        scanf("%s", str);
        len = strlen(str);
        for (j = 0; j < len; j++)
        {
            if (str[j] >= 'A' && str[j] <= 'Z') str1[j] = str[j] - 'A' + 'a';
            else str1[j] = str[j];
        }
        printf("%s\n", str1);
    }
    return 0;
}