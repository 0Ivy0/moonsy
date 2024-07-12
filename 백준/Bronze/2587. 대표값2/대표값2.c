#include <stdio.h>

int main()
{
  int arr[6], i, j, s = 0, tmp, max, maxs;
  for (i = 0; i < 5; i++)
    {
      scanf("%d", &arr[i]);
      s += arr[i];
    }
  for (i = 0; i < 5; i++)
    {
      max = 0;
      for (j = i; j < 5; j++)
        {
          if (max < arr[j])
          {
             max = arr[j];
             maxs = j;
          }
        }
      tmp = arr[i];
      arr[i] = arr[maxs];
      arr[maxs] = tmp;
    }
  printf("%d\n%d", s / 5, arr[2]);
}