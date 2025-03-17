#include <iostream>

using namespace std;

int main()
{
    int n, x, y, trash = 0, sand, day = 0, c_day;
    cin >> n >> x >> y;
    for (int i = 0; i < n; i++)
    {
        cin >> sand;
        c_day = sand / x;
        sand -= x * c_day;
        if ((y - x) * c_day < sand) trash += sand - ((y - x) * c_day) ;
        day += c_day;
    }
    cout << day << "\n" << trash;
}