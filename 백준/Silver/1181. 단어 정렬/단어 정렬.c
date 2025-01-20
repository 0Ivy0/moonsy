#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>

char str[20001][51], tmp[20001][51];

int compare(char a[], char b[])
{
    if (strlen(a) < strlen(b)) return 0;
    else if (strlen(a) > strlen(b)) return 1;
    else
    {
        if (strcmp(a, b) < 0) return 0;
        else return 1;
    }
}

void merge(int left, int right)
{
    int mid = (left + right) / 2;
    int k = left, sleft = left, smid = mid + 1;
    while (left <= mid && smid <= right)
    {
        if (compare(str[left], str[smid]))
        {
            strcpy(tmp[k++], str[smid++]);
        }
        else
        {
            strcpy(tmp[k++], str[left++]);
        }
    }
    while (left <= mid)
    {
        strcpy(tmp[k++], str[left++]);
    }
    while (smid <= right)
    {
        strcpy(tmp[k++], str[smid++]);
    }
    for (int i = sleft; i <= right; i++)
    {
        strcpy(str[i], tmp[i]);
    }
}

void partition(int left, int right)
{
    if(left >= right) return;
    int mid = (left + right) / 2;
    partition(left, mid);
    partition(mid + 1, right);
    merge(left, right);
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }
    partition(0, n);
    for (int i = 0; i <= n; i++)
    {
        char save[51];
        if (strcmp(save, str[i]) == 0) continue;
        printf("%s\n", str[i]);
        strcpy(save, str[i]);
    }
    return 0;
}