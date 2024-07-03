#include <stdio.h>
#include <string.h>

int main()
{
    char wa[11], name[11];
    long long int score, max = 0;
    int n, i, j;
    scanf("%d", &n);
    for (i = 0; i < 11; i++) wa[i] = '\0';
    for (i = 0; i < n; i++)
    {
        scanf("%s %d", name, &score);
        if ((max < score) || (max == score && strcmp(wa, name) > 0))
        {
            strcpy(wa, name);
            max = score;
        }
    }
    printf("%s", wa);
    return 0;
}