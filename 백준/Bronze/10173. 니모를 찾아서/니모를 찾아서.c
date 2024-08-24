#include <stdio.h>
#include <string.h>

int main()
{
    int i, f = 0;;
    char str[81];
    gets(str);
    while (strcmp(str, "EOI"))
    {
        for (i = 0; i < strlen(str); i++)
        {
            if (str[i] >= 'A' && str[i] <= 'Z') str[i] = str[i] - 'A' + 'a';
        }
        for (i = 0; i < strlen(str) - 3; i++)
        {
            if (str[i] == 'n' && str[i + 1] == 'e' && str[i + 2] == 'm' && str[i + 3] == 'o')
            {
                f = 1;
            }
        }
        if (f == 1) printf("Found\n");
        else printf("Missing\n");
        gets(str);
        f = 0;
    }
    return 0;
}