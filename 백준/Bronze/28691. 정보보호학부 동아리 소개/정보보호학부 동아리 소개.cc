#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    char wa;
    cin >> wa;
    if (wa == 'M') cout << "MatKor";
    else if (wa == 'W') cout << "WiCys";
    else if (wa == 'C') cout << "CyKor";
    else if (wa == 'A') cout << "AlKor";
    else if (wa == '$') cout << "$clear";
}