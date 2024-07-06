#include <stdio.h>
#include <string.h>

int main()
{
    char str[51], score[3];
    float s = 0, sum = 0, arr;
    int i;
    for (i = 0; i < 20; i++)
    {
        scanf("%s %f %s", str, &arr, score);
        if (strcmp(score, "A+") == 0) s += 4.5 * arr;
        if (strcmp(score, "A0") == 0) s += 4.0 * arr;
        if (strcmp(score, "B+") == 0) s += 3.5 * arr;
        if (strcmp(score, "B0") == 0) s += 3.0 * arr;
        if (strcmp(score, "C+") == 0) s += 2.5 * arr;
        if (strcmp(score, "C0") == 0) s += 2.0 * arr;
        if (strcmp(score, "D+") == 0) s += 1.5 * arr;
        if (strcmp(score, "D0") == 0) s += 1.0 * arr;
        if (strcmp(score, "P") != 0) sum += arr;
        strcpy(score, "\0");
    }
    printf("%f", s / sum);
    return 0;
}