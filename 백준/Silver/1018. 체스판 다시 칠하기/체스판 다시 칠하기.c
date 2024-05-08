#include <stdio.h>

int main()
{
    int n, m, i, j, k, p, f = 0, save_error = 100, error1 = 0, error2 = 0;
    char f_chess1[9][9], f_chess2[9][9], chess[51][51];
    scanf("%d %d", &n, &m);

    for (i = 0; i < n; i++)
    {
        scanf("%s", &chess[i]);
    }

    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            if (f == 0)
            {
                f_chess1[i][j] = 'B';
                f_chess2[i][j] = 'W';
                f = 1;
            }
            else
            {
                f_chess1[i][j] = 'W';
                f_chess2[i][j] = 'B';
                f = 0;
            }
        }
        if (f == 0) f = 1;
        else f = 0;
    }

    for (k = 0; k < n - 7; k++)
    {
        for (p = 0; p < m - 7; p++)
        {
            error1 = 0;
            error2 = 0;
            for (i = 0; i < 8; i++)
            {
                for (j = 0; j < 8; j++)
                {
                    if (chess[i + k][j + p] != f_chess1[i][j])
                        error1++;
                    if (chess[i + k][j + p] != f_chess2[i][j])
                        error2++;
                }
            }
            if (error1 >= error2)
                error1 = error2;
            if (error1 <= save_error)
                save_error = error1;
        }
    }
    printf("%d", save_error);
    return 0;
}