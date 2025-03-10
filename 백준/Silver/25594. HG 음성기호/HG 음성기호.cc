#include <iostream>
#include <map>
#include <cstring>
#include <string>

using namespace std;

char real[4000001];
map<char,string>dict;
string al[] = {"aespa", "baekjoon", "cau", "debug", "edge", "firefox", "golang"
    , "haegang", "iu", "java", "kotlin", "lol", "mips", "null", "os", "python"
    , "query", "roka", "solvedac", "tod", "unix", "virus", "whale", "xcode"
    , "yahoo", "zebra"};
string str;

int main()
{
    int save;
    bool f = 0;
    for (char i = 'a'; i <= 'z'; i++)
    {
        dict[i] = al[i - 'a'];
    }
    cin >> str;
    for (int i = 0, j = 0; i < str.size(); i++)
    {
        real[j++] = str[i];
        save = i;
        for (int k = 0; k < (dict[str[save]].length()); k++, i++)
        {
            if (dict[str[save]][k] != str[i])
            {
                f = 1;
            }
            if (k == dict[str[save]].length() - 1)
            {
                break;
            }
        }
        
    }
    if (f == 0)
    {
        cout << "It's HG!\n" << real;
    }
    else cout << "ERROR!";
    return 0;
}