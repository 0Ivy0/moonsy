#include <stdio.h>

int main()
{
	int n, i, sum = 0;
	scanf("%d", &n);
	char arr[n];
	scanf("%s", arr);

	for (i = 0; i < n; i++)
	{
		sum += arr[i] - '0';
	}
	printf("%d", sum);
}