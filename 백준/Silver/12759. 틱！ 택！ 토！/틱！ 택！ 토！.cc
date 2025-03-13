#include <iostream>

using namespace std;

int arr[4][4], f = 0;

void check()
{
    int s, s2;
    for (int i = 0; i < 3; i++)
    {
        s2 = 0;
        s = 0;
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == 1) s++;
            else if (arr[i][j] == 2) s2++;
        }
        if (s == 3) f = 1;
        else if (s2 == 3) f = 2;
    }
    for (int i = 0; i < 3; i++)
    {
        s2 = 0;
        s = 0;
        for (int j = 0; j < 3; j++)
        {
            if (arr[j][i] == 1) s++;
            else if (arr[j][i] == 2) s2++;
        }
        if (s == 3) f = 1;
        else if (s2 == 3) f = 2;\
    }
    s = 0;
    s2 = 0;
    for (int i = 0; i < 3; i++)
    {
        if (arr[i][i] == 1) s++;
        if (arr[i][i] == 2) s2++;
    }
    if (s == 3) f = 1;
    else if (s2 == 3) f = 2;
    if (arr[0][2] == 1 && arr[1][1] == 1 && arr[2][0] == 1) f = 1;
    else if (arr[0][2] == 2 && arr[1][1] == 2 && arr[2][0] == 2) f = 2;
}

int main()
{
    int number, x, y;
    cin >> number;
    for (int i = 0; i < 9; i++)
    {
        cin >> x >> y;
        arr[x - 1][y - 1] = number;
        check();
        if (number == 1) number = 2;
        else number = 1;
        if (f != 0) break;
    }
    cout << f;
    return 0;
}