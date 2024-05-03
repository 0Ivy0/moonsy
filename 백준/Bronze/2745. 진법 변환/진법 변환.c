#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char str[37];
    double n;
    int len, sum = 0, i;
    scanf("%s %lf", str, &n);
    len = strlen(str);

    for (i = 0; i < len; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            sum += (str[i] - 'A' + 10) * pow(n, len - i - 1);
        }
        else
        {
            sum += (str[i] - '0') * pow(n, len - i - 1);
        }
    }
    printf("%d", sum);

    return 0;
}