#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, first = 0, len, s_n = 0, s = 0, ten = 1, f = 0;
    char cal[51], num[6], s_cal = '+';
    gets(cal);
    for (i = 0; i < 6; i++) num[i] = '\0';
    for (i = 0; i < strlen(cal); i++, j++)
    {
        s_n = 0;
        ten = 1;
        if (cal[i] >= '0' && cal[i] <= '9')
        {
            num[first] = cal[i];
            first++;
            continue;
        }
        len = strlen(num);
        for (j = len - 1; j >= 0; j--)
        {
            s_n += (num[j] - '0') * ten;
            ten *= 10;
        }
        for (j = 0; j < 6; j++) num[j] = '\0';
        if (f == 0)
        {
            s += s_n;
            f = 1;
            s_cal = cal[i];
            first = 0;
            continue;
        }
        if (s_cal == '+')
        {
            s += s_n;
            s_cal = cal[i];
        }
        else
        {
            s -= s_n;
            s_cal = '-';
        }
        first = 0;
    }
    len = strlen(num);
    for (j = len - 1; j >= 0; j--)
    {
        s_n += (num[j] - '0') * ten;
        ten *= 10;
    }
    if (s_cal == '+') s += s_n;
    else s -= s_n;
    printf("%d", s);
    return 0;
}