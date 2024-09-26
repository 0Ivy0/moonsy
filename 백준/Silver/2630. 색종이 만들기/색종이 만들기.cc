#include <iostream>

using namespace std;

void paper(int x, int y, int w);

int arr[128][128], blue = 0, white = 0;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    
    paper(0, 0, n);
    printf("%d\n%d", white, blue);
}

void paper(int x, int y, int w)
{
    if (w == 0) return;
    int save, f = 0;
    save = arr[x][y];
    for (int i = x; i < x + w; i++)
    {
        for (int j = y; j < y + w; j++)
        {
            if (arr[i][j] != save)
            {
                f = 1;
            }
        }
    }
    if (f == 1)
    {
        paper(x, y, w / 2);
        paper(x + w / 2, y, w / 2);
        paper(x, y + w / 2, w / 2);
        paper(x + w / 2, y + w / 2, w / 2);
    }
    else
    {
        if (arr[x][y] == 1) blue++;
        if (arr[x][y] == 0) white++;
    }
}