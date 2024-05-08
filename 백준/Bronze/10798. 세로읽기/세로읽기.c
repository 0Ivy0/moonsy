#include <stdio.h>

int main()
{
    char str[5][16] = {0,};
    int i, j;
    for (i = 0; i < 5; i++)
        scanf("%s", str[i]);

    for (i = 0; i < 16; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (str[j][i])
                printf("%c", str[j][i]);
        }
    }
    return 0;
}