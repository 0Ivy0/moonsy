#include <stdio.h>

int main()
{
    int n, i, up, down, r_up, up_save = 1, r_down, down_save = 3, arr[10000];
    scanf("%d", &n);
    up = n;
    down = n;
    while (up > up_save)
    {
        up -= up_save;
        up_save += 4;
    }
    while (down > down_save)
    {
        down -= down_save;
        down_save += 4;
    }
    r_up = up;
    if (up > up_save / 2 + 1)
    {
        r_up -= (up_save / 2) + 1;
        for (i = 0; i < up_save / 2; i++)
        {
            arr[up_save / 2 - i] = i + 1;
        }
        r_up = arr[r_up];
    }
    r_down = down;
    if (down > down_save / 2 + 1)
    {
        r_down -= (down_save / 2) + 1;
        for (i = 0; i < down_save / 2; i++)
        {
            arr[down_save / 2 - i] = i + 1;
        }
        r_down = arr[r_down];
    }

    printf("%d/%d", r_up, r_down);

    return 0;
}
