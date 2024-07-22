#include <stdio.h>
#include <string.h>

int main()
{
    int t, n, i, j;
    char str[1000], al[28];
    scanf("%d", &t);
    getchar();
    for (i = 0; i < t; i++)
    {
        n = 3;
        gets(str);
        for (j = 0; j < 27; j++) al[j] = '\0';
        for (j = 0; j < strlen(str); j++)
        {
            if (str[j] >= 'a' && str[j] <= 'z') str[j] -= 'a' - 1;
            else if (str[j] >= 'A' && str[j] <= 'Z') str[j] -= 'A' - 1;
            else continue;
            al[str[j]]++;
        }
        for (j = 1; j < 27; j++)
        {
            if (n > al[j]) n = al[j];
        }
        printf("Case %d: ", i + 1);
        if (n >= 3) printf("Triple pangram!!!\n");
        else if (n == 2) printf("Double pangram!!\n");
        else if (n == 1) printf("Pangram!\n");
        else printf("Not a pangram\n");
    }
    return 0;
}