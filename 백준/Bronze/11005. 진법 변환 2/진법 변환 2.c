#include <stdio.h>
#include <string.h>

char str[100000];

int main()
{
    int i, len, N, n;
    scanf("%d %d", &N, &n);
    for (i = 0; N > 0; i++)
    {
        str[i] = N % n + '0';
        N /= n;
    }
    len = strlen(str);
    for (i = len-1; i >=0 ; i--)
    {
        if (str[i] > '9')
            printf("%c", str[i] - '0' + 'A' - 10);
        else
            printf("%c", str[i]);
    }
    return 0;
}