#include <stdio.h>

int main()
{
    int n, i = 10, num = 666, save_num = 666, cnt_six, cnt_n = 0;
    scanf("%d", &n);

    while (cnt_n != n)
    {
        num = save_num;
        cnt_six = 0;
        while (num > 0)
        {
            if (num % i == 6)
            {
                cnt_six++;
                if (cnt_six == 3)
                {
                    cnt_n++;
                    break;
                }
            }
            else
                cnt_six = 0;
            num /= i;
        }
        save_num++;
    }
    printf("%d", save_num - 1);
}