#include <stdio.h>
#include <string.h>

char str[30001], str1[30001];

int main()
{
    int len1, len2, i, j = 0;
    gets(str);
    scanf("%s", str1);
    len1 = strlen(str);
    len2 = strlen(str1);
    
    for (i = 0; i < len1; i++)
    {
        if (str[i] == ' ')
        {
            printf(" ");
            continue;
        }
        if (str[i] - str1[i%len2] <= 0)
            printf("%c", str[i] - (str1[i%len2] - 'a') - 1 + 26);
        else
            printf("%c", str[i] - str1[i%len2] + 'a' - 1);
    }
    return 0;
}