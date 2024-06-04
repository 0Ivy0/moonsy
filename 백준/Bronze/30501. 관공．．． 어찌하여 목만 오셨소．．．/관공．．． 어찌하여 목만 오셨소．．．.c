#include <stdio.h>
#include <string.h>

int main()
{
    char str[101], save[101] = {'\0'};
    int n, len, i, j, k, f = 0;;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%s", str);
        len = strlen(str);
        for (j = 0; j < len; j++)
        {
            if (str[j] == 'S')
            {
                for (k = 0; k < len; k++)
                {
                    save[k] = str[k];
                }
                break;
            }
        }
    }
    printf("%s", save);
    return 0;
}