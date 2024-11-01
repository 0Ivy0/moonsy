#include <stdio.h>

int main()
{
    int c[3], d[3], hp, sec = 0;
    for (int i = 0; i < 3; i++)
    {
        scanf("%d %d", &c[i], &d[i]);
    }
    scanf("%d", &hp);
    hp -= d[1] + d[2] + d[0];
    if (hp <= 0)
    {
        printf("0");
        return 0;
    }
    do
    {
        sec++;
        for (int i = 0; i < 3; i++)
        {
            if (sec % c[i] == 0)
            {
                hp -= d[i];
            }
        }
    } while (hp > 0);
    printf("%d", sec);
    return 0;
}