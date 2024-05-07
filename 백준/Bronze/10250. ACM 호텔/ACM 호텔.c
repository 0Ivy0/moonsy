#include <stdio.h>

int main()
{
	int num, h, w, n , i, room_h, room_w;
	scanf("%d", &num);
	for (i = 0; i < num; i++)
	{
		scanf("%d %d %d", &h, &w, &n);
		room_h = (n % h) * 100;
		room_w = (n / h) + 1;
		if (n % h == 0)
		{
			room_h = h * 100;
			room_w = n / h;
			printf("%d\n", room_h + room_w);
		}
		else
		{
			printf("%d\n", room_h + room_w);
		}
	}
}
