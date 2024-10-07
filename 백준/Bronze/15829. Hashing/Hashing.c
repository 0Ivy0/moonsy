#include <stdio.h>
#include <math.h>

int main()
{
    long long int wa = 0;
    char str[51];
    int n;
    scanf("%d %s", &n, str);
    for (int i = 0; i < n; i++)
    {
        wa += (long long)((str[i] - 'a' + 1)*pow(31,i))%1234567891;
    }
    printf("%lld", wa % 1234567891);
}