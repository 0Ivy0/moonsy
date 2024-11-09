#include <stdio.h>

int main()
{
    int n, i, weight = 0, room = 1;
    scanf("%d", &n);
    n -= 1;
    for (i = 0; n > weight; i++)
    {
        n -= weight;
        weight += 6;
        room += 1;
    }
    printf("%d", room);
}