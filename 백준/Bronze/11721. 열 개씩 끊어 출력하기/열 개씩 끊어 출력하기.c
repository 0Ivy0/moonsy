#include <stdio.h>
#include <string.h>

int main()
{
    int i, len;
    char str[101];
    gets(str);
    for (i = 0; i < strlen(str); i++)
    {
        printf("%c", str[i]);
        if (i % 10 == 9) printf("\n");
    }
    return 0;
}