#include <stdio.h>
#include <string.h>

int main()
{
    int n, m, num, i, len, first, end, cnt = 0;
    scanf("%d %d %d", &n, &m, &num);
    first = 1;
    end = m;
    for (i = 0; i < num; i++)
    {
        scanf("%d", &len);
        if (first <= len && end >= len) continue;
        else if (first > len)
        {
            cnt += first - len;
            end -= first - len;
            first = len;
        }
        else
        {
            cnt += len - end;
            first += len - end;
            end = len;
        }
    }
    printf("%d", cnt);
    return 0;
}