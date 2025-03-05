#include <stdio.h>

int main()
{
    int n, m, x, y, d_x, d_y;
    scanf("%d %d %d %d %d %d", &n, &m, &x, &y, &d_x, &d_y);
    if ((d_x - x) % 2 == 0 && (d_y - y) % 2 == 0) printf("YES");
    else printf("NO");
}