#include <stdio.h>

int node[27][3];

void p(int root)
{
    if (root == -1) return;
    printf("%c", root+'A');
    p(node[root][0]);
    p(node[root][1]);
}

void p1(int root)
{
    if (root == -1) return;
    p1(node[root][0]);
    printf("%c", root+'A');
    p1(node[root][1]);
}

void p2(int root)
{
    if (root == -1) return;
    p2(node[root][0]);
    p2(node[root][1]);
    printf("%c", root+'A');
}

int main()
{
    int n, i;
    char a, b, c;
    scanf("%d", &n);
    getchar();
    for (i = 0; i < n; i++)
    {
        scanf("%c %c %c", &a, &b, &c);
        getchar();
        if (b == '.') node[a - 'A'][0] = -1;
        else node[a - 'A'][0] = b - 'A';
        if (c == '.') node[a - 'A'][1] = -1;
        else node[a - 'A'][1] = c - 'A';
    }
    p(0);
    printf("\n");
    p1(0);
    printf("\n");
    p2(0);
    return 0;
}