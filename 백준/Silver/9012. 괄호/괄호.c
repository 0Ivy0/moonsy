#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    int n, i, j, len, cnt, v1, v2, f;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        cnt = 0;
        v1 = 0;
        v2 = 0;
        f = 0;
        for (j = 0; j < 50; j++)
            str[j] = '\0';
        scanf("%s", str);
        len = strlen(str);
        for (j = 0; j < len; j++)
        {
            if (str[j] == '(')
            {
                cnt++;
                v1++;
            }
            else
            {
                cnt--;
                v2++;
            }
            if (v1 < v2)
            {
                printf("NO\n");
                f = 1;
                break;
            }
        }
        if (cnt != 0 && f == 0)
            printf("NO\n");
        if(v1 == v2 && f == 0)
            printf("YES\n");
    }
}