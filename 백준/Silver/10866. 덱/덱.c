#include <stdio.h>
#include <string.h>

int deque[20001], f = 10000, b = 10000;

void push_front(int);
void push_back(int);
void pop_front();
void pop_back();
void size();
void empty();
void front();
void back();

int main()
{
    int n, wa;
    char str[11];
    scanf("%d", &n);
    while(n--)
    {
        scanf("%s", str);
        if (strcmp(str, "push_back") == 0 || strcmp(str, "push_front") == 0)
        {
            scanf("%d", &wa);
            if (strcmp(str, "push_back") == 0) push_back(wa);
            else if (strcmp(str, "push_front") == 0) push_front(wa);
        }
        else if (strcmp(str, "pop_front") == 0) pop_front();
        else if (strcmp(str, "pop_back") == 0) pop_back();
        else if (strcmp(str, "size") == 0) size();
        else if (strcmp(str, "empty") == 0) empty();
        else if (strcmp(str, "front") == 0) front();
        else if (strcmp(str, "back") == 0) back();
    }
    return 0;
}

void push_front(int item)
{
    deque[--f] = item;
}

void push_back(int item)
{
    deque[b++] = item;
}

void pop_front()
{
    if (f == b) printf("-1\n");
    else printf("%d\n", deque[f++]);
}

void pop_back()
{
    if (f == b) printf("-1\n");
    else printf("%d\n", deque[--b]);
}

void size()
{
    printf("%d\n", b - f);
}

void empty()
{
    if (f == b) printf("1\n");
    else printf("0\n");
}

void front()
{
    if (f == b) printf("-1\n");
    else printf("%d\n", deque[f]);
}

void back()
{
    if (f == b) printf("-1\n");
    else printf("%d\n", deque[b - 1]);
}