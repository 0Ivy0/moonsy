#include <stdio.h>
#include <string.h>

int main()
{
    char str[500] = {0,};
    int len, i;
    while (1)
    {
        gets(str);
        len = strlen(str);
        if (strcmp(str, "END") == 0)
            break;
        for (i = len - 1; i >= 0; i--)
            printf("%c", str[i]);
        printf("\n");
    }
    return 0;
}