#include <stdio.h>
#include <string.h>

int main()
{
    int o, w, n, dead = 0, num = 1;
    char action;
    scanf("%d %d", &o, &w);
    while (1)
    {
        scanf("%c %d", &action, &n);
        if (action == 'F') w += n;
        if (action == 'E') w -= n;
        if (w <= 0) dead = 1;
        if (action == '#')
        {
            if (dead == 1) printf("%d RIP\n", num);
            else if (w > o / 2 && w < o * 2) printf("%d :-)\n", num);
            else printf("%d :-(\n", num);
            scanf("%d %d", &o, &w);
            if (o == 0 && w == 0) break;
            dead = 0;
            num++;
        }
    }
    return 0;
}
