#include <stdio.h>

int main()
{
    long long int a, b, c, s_a, s_b, s_c;
    int t, i;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%lld %lld %lld", &a, &b, &c);
        s_a = a*a + (b+c)*(b+c);
        s_b = b*b + (a+c)*(a+c);
        s_c = c*c + (b+a)*(b+a);
        if (s_a <= s_b && s_a <= s_c) printf("%lld\n", s_a);
        else if (s_b <= s_a && s_b <= s_c) printf("%lld\n", s_b);
        else printf("%lld\n", s_c);
    }
    return 0;
}