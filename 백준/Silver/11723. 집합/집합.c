#include <stdio.h>
#include <string.h>

int main()
{
    char str[7];
    int n, i, j, num, S[21];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%s %d", str , &num);
        if (strcmp(str, "add") == 0)
        {
            S[num] = 1;
        }
        if (strcmp(str, "remove") == 0)
        {
            S[num] = 0;
        }
        if (strcmp(str, "check") == 0)
        {
            if (S[num] == 1) printf("1\n");
            else printf("0\n");
        }
        if (strcmp(str, "toggle") == 0)
        {
            if (S[num] == 1) S[num] = '\0';
            else S[num] = 1;
        }
        if (strcmp(str, "all") == 0)
        {
            for (j = 0; j < 21; j++) S[j] = 1;
        }
        if (strcmp(str, "empty") == 0)
        {
            for (j = 0; j < 21; j++) S[j] = 0;
        }
    }
    return 0;
}