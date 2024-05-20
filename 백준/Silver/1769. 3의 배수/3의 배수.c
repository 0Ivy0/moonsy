#include <stdio.h>
#include <string.h>

char str[1000000];

int main()
{
    int n = 0, c = 0, len, i;
    scanf("%s", str);
    len = strlen(str);

    while (len > 1)
    {
        for (i = 0; i < len; i++)
        {
            n += str[i] - '0';
        }
        for (i = 0; i < len; i++)
        {
            str[i] = '\0';
        }
        for (i = 0; n > 0; i++)
        {
            str[i] = n % 10 + '0';
            n /= 10;
        }
        len = strlen(str);
        c++;
    }
    printf("%d\n", c);
    if (str[0] % 3 == 0) printf("YES");
    else printf("NO");

    return 0;
}