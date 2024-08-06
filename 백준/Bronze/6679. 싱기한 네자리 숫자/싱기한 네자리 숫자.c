#include <stdio.h>

int main()
{
    int i, j, s1, s2, s3, save;
    for (i = 1000; i <= 9999; i++)
    {
        save = i;
        s1 = 0;
        s2 = 0;
        s3 = 0;
        for (j = 0; j < 4; j++)
        {
            s1 += save % 10;
            save /= 10;
        }
        save = i;
        for (j = 0; j < 4; j++)
        {
            s2 += save % 12;
            save /= 12;
        }
        save = i;
        for (j = 0; j < 4; j++)
        {
            s3 += save % 16;
            save /= 16;
        }
        if (s1 == s2 && s2 == s3) printf("%d\n", i);
    }
    return 0;
}