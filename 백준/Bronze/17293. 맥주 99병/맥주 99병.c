#include <stdio.h>
#include <string.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    if (n == 1)
    {
        printf("1 bottle of beer on the wall, 1 bottle of beer.\n");
        printf("Take one down and pass it around, no more bottles of beer on the wall.\n");
        printf("\n");
        printf("No more bottles of beer on the wall, no more bottles of beer.\n");
        printf("Go to the store and buy some more, %d bottle of beer on the wall.", n);
        return 0;
    }
    for (i = n; i > 2; i--)
    {
        printf("%d bottles of beer on the wall, %d bottles of beer.\n", i, i);
        printf("Take one down and pass it around, %d bottles of beer on the wall.\n", i - 1);
        printf("\n");
    }
    printf("2 bottles of beer on the wall, 2 bottles of beer.\n");
    printf("Take one down and pass it around, 1 bottle of beer on the wall.\n");
    printf("\n");
    printf("1 bottle of beer on the wall, 1 bottle of beer.\n");
    printf("Take one down and pass it around, no more bottles of beer on the wall.\n");
    printf("\n");
    printf("No more bottles of beer on the wall, no more bottles of beer.\n");
    printf("Go to the store and buy some more, %d bottles of beer on the wall.", n);
    return 0;
}