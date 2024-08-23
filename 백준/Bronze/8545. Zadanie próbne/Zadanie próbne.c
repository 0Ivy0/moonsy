#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    char str[1001];
    scanf("%s", str);
    for (i = 0; i < strlen(str); i++)
    {
        printf("%c", str[strlen(str) - i - 1]);
    }
    return 0;
}