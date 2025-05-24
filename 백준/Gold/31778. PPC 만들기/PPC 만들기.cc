#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n,k;
    string s;
    cin >> n >> k >> s;
    int i = 0, j = s.length()-1;
    while(i<j && k>0){
        k--;
        while(i < j && s[i]!='C')i++;
        while(i < j && s[j]!='P')j--;
        swap(s[i],s[j]);
    }
    long long pcnt = 0;
    long long ssum = 0;
    for(auto x : s){
        if(x == 'P') pcnt++;
        else if(x == 'C' && pcnt >=2) ssum += pcnt * (pcnt-1)/2;
    }
    cout << ssum;
}