#include <stdio.h>
#include <string.h>

int main()
{
    int i, wa = 0, f = 0, f1 = 0, f2 = 0, f3 = 0;
    char str[1001];
    scanf("%s", str);
    for (i = 0; i < strlen(str); i++)
    {
        if (f == 0 && str[i] == 'K')
        {
            wa++;
            f = 1;
        }
        if (f1 == 0 && f == 1 && str[i] == 'O')
        {
            wa++;
            f1 = 1;
        }
        if (f2 == 0 && f1 == 1 && str[i] == 'R')
        {
            wa++;
            f2 = 1;
        }
        if (f3 == 0 && f2 == 1 && str[i] == 'E')
        {
            wa++;
            f3 = 1;
        }
        if (f3 == 1 && str[i] == 'A')
        {
            wa++;
            f = f1 = f2 = f3 = 0;
        }
    }
    printf("%d", wa);
    return 0;
}