#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    long long int num, save;
    int i, j, len, f = 0;
    char str[4][9];
    for (i = 0; i < 3; i++)
    {
        num = 0;
        scanf("%s", &str[i]);
        if (f != 0) continue;
        if (str[i][0] == 'F' || str[i][0] == 'B') continue;
        else
        {
            len = strlen(str[i]);
            for (j = 0; j < len; j++)
            {
                num += (str[i][j] - '0') * pow(10, len - j - 1);
            }
            num += 3 - i;
        }
        if (num % 3 == 0 && num % 5 == 0) f = 1;
        else if (num % 3 == 0 && num % 5 != 0) f = 2;
        else if (num % 3 != 0 && num % 5 == 0) f = 3;
        else
        {
            save = num;
            f = 4;
        }
    }
    if (f == 1) printf("FizzBuzz");
    if (f == 2) printf("Fizz");
    if (f == 3) printf("Buzz");
    if (f == 4) printf("%lld", save);
    return 0;
}