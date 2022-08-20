#include <bits/stdc++.h>

using namespace std;

string palindrom(string str);
int main()
{
    unsigned short int n;
    string str;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        cout << palindrom(str) << endl;
    }
    return 0;
}

string palindrom(string str)
{
    int n = str.length();
    for (int i = 0; i < n / 2; i++)
    {
        if (str[i] != str[n - 1 - i])
        {
            return "bukan palindrom";
        }
    }
    return "palindrom";
}