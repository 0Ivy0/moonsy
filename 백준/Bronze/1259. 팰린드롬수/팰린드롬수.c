#include <stdio.h>
#include <string.h>

int main()
{
    int len = 0, i, count = 0;
    char str[6] = {1};
    scanf("%s", str);

    while (1)
    {
        len = strlen(str);
        if (strcmp("0", str) == 0)
        {
            break;
        }
        if (len == 1)
        {
            printf("yes\n");
        }
        for (i = 0; i < len / 2; i++)
        {
            
            if (str[i] != str[len - i - 1])
            {
                printf("no\n");
                break;
            }
            count += 1;
            if (count == len / 2)
            {
                printf("yes\n");
            }
        }
        scanf("%s", str);
        count = 0;
    }
}