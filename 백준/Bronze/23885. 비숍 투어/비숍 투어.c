#include <stdio.h>

int main()
{
    int n, m, x, y, d_x, d_y;
    scanf("%d %d %d %d %d %d", &n, &m, &x, &y, &d_x, &d_y);
    if ((n == 1 || m == 1) && (d_x != x || d_y != y)) printf("NO");
    else if ((d_x - x) % 2 == 0 && (d_y - y) % 2 == 0) printf("YES");
    else if ((d_x - x) % 2 != 0 && (d_y - y) % 2 != 0) printf("YES");
    else printf("NO");
}