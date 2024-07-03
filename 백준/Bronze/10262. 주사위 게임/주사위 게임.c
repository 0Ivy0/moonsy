#include <stdio.h>
#include <string.h>

int main()
{
    int i, dice1[5], dice2[5], s1 = 0, s2 = 0;
    for (i = 0; i < 4; i++)
    {
        scanf("%d", &dice1[i]);
        s1 += dice1[i];
    }
    for (i = 0; i < 4; i++)
    {
        scanf("%d", &dice2[i]);
        s2 += dice2[i];
    }
    if (s1 > s2) printf("Gunnar");
    else if (s1 < s2) printf("Emma");
    else printf("Tie");
    return 0;
}