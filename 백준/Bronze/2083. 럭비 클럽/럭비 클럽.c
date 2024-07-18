#include <stdio.h>
#include <string.h>

int main()
{
    char str[11];
    int age, weight;
    scanf("%s %d %d", str, &age, &weight);
    while (strcmp(str, "#") != 0)
    {
        if (age > 17 || weight >= 80) printf("%s Senior\n", str);
        else printf("%s Junior\n", str);
        scanf("%s %d %d", str, &age, &weight);
    }
    return 0;
}