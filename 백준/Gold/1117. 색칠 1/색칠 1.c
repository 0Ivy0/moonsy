#include <stdio.h>
#include <string.h>

int main()
{
    long long int w, h, f, c, x1, y1, x2, y2, color = 0, save;
    scanf("%lld %lld %lld %lld %lld %lld %lld %lld", &w, &h, &f, &c, &x1, &y1, &x2, &y2);
    if (f >= w - f)
    {
        save = w - f;
        if (x2 <= save)
        {
            color += 2 * (c + 1) * (x2 - x1) * (y2 - y1);
        }
        else if (x1 >= save)
        {
            color += (c + 1) * (x2 - x1) * (y2 - y1);
        }
        else
        {
            color += 2 * (c + 1) * (save - x1) * (y2 - y1);
            color += (c + 1) * (x2 - save) * (y2 - y1);
        }
    }
    else 
    {
        save = f;
        if (x2 <= save)
        {
            color += 2 * (c + 1) * (x2 - x1) * (y2 - y1);
        }
        else if (x1 >= save)
        {
            color += (c + 1) * (x2 - x1) * (y2 - y1);
        }
        else
        {
            color += 2 * (c + 1) * (save - x1) * (y2 - y1);
            color += (c + 1) * (x2 - save) * (y2 - y1);
        }
    }
    printf("%lld", w * h - color);
    return 0;
}