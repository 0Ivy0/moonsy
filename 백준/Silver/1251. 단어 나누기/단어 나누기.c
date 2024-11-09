#include <stdio.h>
#include <string.h>

int end = 0;
char wa[51], yaho[51], save[51];

void rev(int a, int b);

int main()
{
    scanf("%s", yaho);
    for (int i = 0; i < strlen(yaho); i++) save[i] = 'z';
    for (int i = 1; i < strlen(yaho); i++)
    {
        for (int j = i + 1; j < strlen(yaho); j++)
        {
            rev(0, i);
            rev(i, j);
            rev(j, strlen(yaho));
            if (strcmp(save, wa) > 0)
            {
                for (int k = 0; k < strlen(yaho); k++)
                {
                    save[k] = wa[k];
                }
            }
            end = 0;
        }
    }
    printf("%s", save);
    return 0;
}

void rev(int a, int b)
{
    for (int i = b - 1; i >= a; i--, end++)
    {
        wa[end] = yaho[i];
    }
}