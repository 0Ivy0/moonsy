#include <stdio.h>
#include <math.h>

int main()
{
    int t, i, j, n1, n2, tmp;
    char str[9];
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        n1 = 0;
        n2 = 0;
        scanf("%s", str);
        for (j = 0; j < 3; j++) n1 += (str[j] - 'A') * pow(26, 2 - j);
        for (j = 4; j < 8; j++) n2 += (str[j] - '0') * pow(10, 7 - j);
        if (n1 < n2)
        {
            tmp = n1;
            n1 = n2;
            n2 = tmp;
        }
        if (n1 - n2 <= 100) printf("nice\n");
        else printf("not nice\n");
    }
    return 0;
}