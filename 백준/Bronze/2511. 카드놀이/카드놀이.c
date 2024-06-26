#include <stdio.h>

int main()
{
    char check[11], win;
    int a[11], b, i, a_s = 0, b_s = 0;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &b);
        if (a[i] > b)
        {
            a_s += 3;
            check[i] = 'A';
        }
        else if (a[i] < b)
        {
            b_s += 3;
            check[i] = 'B';
        }
        else
        {
            a_s += 1;
            b_s += 1;
            check[i] = 'D';
        }
    }
    if (a_s > b_s) win = 'A';
    else if (a_s < b_s) win = 'B';
    else
    {
        for (i = 9; i >= 0; i--)
        {
            if (check[i] == 'D') continue;
            win = check[i];
            break;
        }
        if (i == -1) win = 'D';
    }
    printf("%d %d\n%c", a_s, b_s, win);
    return 0;
}