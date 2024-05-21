#include <stdio.h>
#include <string.h>

int main()
{
    char tebotebo[1001];
    int i, len, left = 0, right = 0, f = 0;
    scanf("%s", tebotebo);
    len = strlen(tebotebo);
    for (i = 0; i < len; i++)
    {
        if (tebotebo[i] == '@' && f == 0)
            left++;
        if (tebotebo[i] == '(') f = 1;
        if (tebotebo[i] == '@' && f == 1)
            right++;
    }
    printf("%d %d", left, right);
    return 0;
}