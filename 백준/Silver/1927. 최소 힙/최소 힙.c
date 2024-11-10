#include <stdio.h>

int heap[100001];
int size;

void push(int item)
{
    heap[++size] = item;
    int now = size;
    while (now > 1 && heap[now/2] < heap[now])
    {
        int tmp = heap[now / 2];
        heap[now / 2] = heap[now];
        heap[now] = tmp;
        now /= 2;
    }
}

int pop()
{
    if (size == 0) return 0;
    int returnv = heap[1];
    heap[1] = heap[size];
    size--;
    int now = 1;
    while (now <= size)
    {
        if (now * 2 > size) return returnv * -1;
        else if (now * 2 + 1 > size)
        {
            if (heap[now] < heap[now * 2])
            {
                int tmp = heap[now * 2];
                heap[now * 2] = heap[now];
                heap[now] = tmp;
                now *= 2;
            }
            else return returnv * -1;
        }
        else
        {
            if (heap[now * 2] < heap[now * 2 + 1])
            {
                if (heap[now] < heap[now * 2 + 1])
                {
                    int tmp = heap[now * 2 + 1];
                    heap[now * 2 + 1] = heap[now];
                    heap[now] = tmp;
                    now = 2 * now + 1;
                }
                else return returnv * -1;
            }
            else
            {
                if (heap[now * 2] > heap[now])
                {
                    int tmp = heap[now * 2];
                    heap[now * 2] = heap[now];
                    heap[now] = tmp;
                    now *= 2;
                }
                else return returnv * -1;
            }
        }
    }
    return returnv * -1;
}

int main()
{
    int q, inst;
    scanf("%d", &q);
    while (q--)
    {
        scanf("%d", &inst);
        if (inst == 0) printf("%d\n", pop());
        else push(inst * -1);
    }
    return 0;
}