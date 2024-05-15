#include <stdio.h>
#include <string.h>

int main()
{
    char str[101];
    int i;
    scanf("%s", str);
    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z') printf("%c", str[i] - 'A' + 'a');
        else printf("%c", str[i] - 'a' + 'A');
    }
}