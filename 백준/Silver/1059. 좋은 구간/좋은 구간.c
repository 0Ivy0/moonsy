#include <stdio.h>

int main()
{
   int l, n, i, j, a = 0, b = 1000, s[1001], min = 1000, max = 1000, wa = 0;
   scanf("%d", &l);
   for (i = 0; i < l; i++)
   {
        scanf("%d", &s[i]);
   }
   scanf("%d", &n);
   for (i = 0; i < l; i++)
   {
        if (n - s[i] >= 0 && min > n - s[i])
        {
            min = n - s[i];
            a = s[i];
        }
        if (n - s[i] <= 0 && max > s[i] - n)
        {
            max = s[i] - n;
            b = s[i];
        }
   }
   //5printf("%d %d\n", a, b);
   for (i = a+1; i <=n; i++)
   {
        for (j = i+1; j < b; j++)
        {
            if (n > j) continue;
            wa++;
        }
   }
   printf("%d", wa);
   return 0;
}