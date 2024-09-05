#include <stdio.h>

int main()
{
   int a, b, i, s = 1;
   scanf("%d %d", &a, &b);
   for (i = a + 1; i <= b; i++)
   {
        if (i % 2 == 1) s++;
   }
   printf("%d", s);
   return 0;
}