#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, j, k, first, end, len, num = 0;
    char str[1001], str1[27][1001], str2[27];

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%s %s", str1[i], &str2[i]);
    }
    scanf("%s", str);
    scanf("%d %d", &first, &end);
    len = strlen(str);

    for (i = 0; i < len; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (str[i] == str2[j])
            {
                for (k = 0; k < strlen(str1[j]); k++)
                {
                    if (num > first - 2 && num < end)
                        printf("%c", str1[j][k]);
                    if (num == end) return 0;
                    num++;
                }
            }
        }
    }
    return 0;
}