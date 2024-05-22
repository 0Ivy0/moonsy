#include <stdio.h>
#include <string.h>

int main()
{
    int n, i;
    char str[31], wa[15] = {'q','w','e','r','t','a','s','d','f','g','z','x','c','v'};
    scanf("%d", &n);
    scanf("%s", str);
    for (i = 0; i < 15; i++)
    {
        if (str[strlen(str) - 1] == wa[i])
        {
            printf("1");
            return 0;
        }
    }
    printf("0");
    return 0;
}