#include <stdio.h>

int main()
{
    int i, x, y, speed = 1, dis, move = 0;
    scanf("%d %d", &x, &y);
    speed = 1;
    move = 0;
    dis = y - x;
    while (dis != 0)
    {
        if (move % 2 == 0 && move != 0)
        {
            speed++;
        }
        while (dis < speed)
        {
            speed--;
        }
        dis -= speed;
        move++;
    }
    printf("%d\n", move);
}
