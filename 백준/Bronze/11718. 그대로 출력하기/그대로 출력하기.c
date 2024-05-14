#include <stdio.h>

int main()
{
    char str;
    int i;

    while (scanf("%c", &str) == 1)
        printf("%c", str);

    return 0;
}