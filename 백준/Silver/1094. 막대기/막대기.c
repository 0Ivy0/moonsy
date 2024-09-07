#include <stdio.h>

int main()
{
    int x, stick = 64, n = 0;
    scanf("%d", &x);
    while (stick != 0)
    {
        if (x >= stick)
        {
            n++;
            x -= stick;
        }
        stick /= 2;
    }
    printf("%d", n);
    return 0;
}