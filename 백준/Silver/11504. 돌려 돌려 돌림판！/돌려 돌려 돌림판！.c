#include <stdio.h>
#include <math.h>

int main()
{
    int t, n, m, input, z[101], i, j, p, cnt, out;
    long long int x, y, save;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        x = 0;
        y = 0;
        cnt = 0;
        scanf("%d %d", &n, &m);
        for (j = 0; j < m; j++)
        {
            scanf("%d", &input);
            x += pow(10, (m - j - 1)) * input;
        }
        for (j = 0; j < m; j++)
        {
            scanf("%d", &input);
            y += pow(10, (m - j - 1)) * input;
        }
        for (j = 0; j < n; j++)
        {
            scanf("%d", &z[j]);
        }
        for (j = 0; j < n; j++)
        {
            save = 0;
            for (p = 0; p < m; p++)
            {
                out = p + j;
                if (out >= n) out %= n;
                //printf("out%d" , out);
                save += pow(10, (m - p - 1)) * z[out];
            }
            //printf("x%d y%d z%d\n", x, y, save);
            if (save >= x && save <= y) cnt++;
        }
        printf("%d\n", cnt);
    }
    return 0;
}