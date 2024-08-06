#include <stdio.h>
#include <string.h>

int main()
{
    float num;
    int t, i, j;
    char str[101];
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%f", &num);
        gets(str);
        for (j = 0; j < strlen(str); j++)
        {
            if (str[j] == ' ') continue;
            else if (str[j] == '#') num -= 7;
            else if (str[j] == '%') num += 5;
            else if (str[j] == '@') num *= 3;
        }
        printf("%.2f\n", num);
    }
    return 0;
}