#include <stdio.h>

int main()
{
    int n, cnt = 0;
    char str[51];
    scanf("%d %s", &n, str);
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'a' || str[i] == 'i' || str[i] == 'u' || str[i] == 'e' || str[i] == 'o') cnt++;
    }
    printf("%d", cnt);
}