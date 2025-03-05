#include <stdio.h>

int main()
{
    int t, a, b;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        scanf("%d %d", &a, &b);
        printf("Case %d: ", i);
        if (a == 1 && b == 1) printf("Habb Yakk\n");
        else if (a == 2 && b == 2) printf("Dobara\n");
        else if (a == 3 && b == 3) printf("Dousa\n");
        else if (a == 4 && b == 4) printf("Dorgy\n");
        else if (a == 5 && b == 5) printf("Dabash\n");
        else if (a == 6 && b == 6) printf("Dosh\n");
        else if (a == 1 && b == 2 || a == 2 && b == 1) printf("Doh Yakk\n");
        else if (a == 1 && b == 3 || a == 3 && b == 1) printf("Seh Yakk\n");
        else if (a == 1 && b == 4 || a == 4 && b == 1) printf("Ghar Yakk\n");
        else if (a == 1 && b == 5 || a == 5 && b == 1) printf("Bang Yakk\n");
        else if (a == 1 && b == 6 || a == 6 && b == 1) printf("Sheesh Yakk\n");
        else if (a == 2 && b == 3 || a == 3 && b == 2) printf("Seh Doh\n");
        else if (a == 2 && b == 4 || a == 4 && b == 2) printf("Ghar Doh\n");
        else if (a == 2 && b == 5 || a == 5 && b == 2) printf("Bang Doh\n");
        else if (a == 2 && b == 6 || a == 6 && b == 2) printf("Sheesh Doh\n");
        else if (a == 3 && b == 4 || a == 4 && b == 3) printf("Ghar Seh\n");
        else if (a == 3 && b == 5 || a == 5 && b == 3) printf("Bang Seh\n");
        else if (a == 3 && b == 6 || a == 6 && b == 3) printf("Sheesh Seh\n");
        else if (a == 4 && b == 5 || a == 5 && b == 4) printf("Bang Ghar\n");
        else if (a == 4 && b == 6 || a == 6 && b == 4) printf("Sheesh Ghar\n");
        else if (a == 5 && b == 6 || a == 6 && b == 5) printf("Sheesh Beesh\n");
    }
}