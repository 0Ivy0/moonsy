#include <stdio.h>
#include <string.h>

int main()
{
    int i, f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    char str[1001];
    gets(str);
    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'U') f1 = 1;
        if (str[i] == 'C' && f1 == 1) f2 = 1;
        if (str[i] == 'P' && f2 == 1) f3 = 1;
        if (str[i] == 'C' && f3 == 1) f4 = 1;
    }
    if (f4 == 1) printf("I love UCPC");
    else printf("I hate UCPC");
    return 0;
}